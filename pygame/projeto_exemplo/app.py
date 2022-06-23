import sys
import pygame
from pygame.locals import *
from time import sleep

from Enemy import Enemy
from Player import Player

pygame.init()

FPS_VALUE = 60
FPS = pygame.time.Clock()

# ? definicao das cores
BLUE = (0, 0, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

# ? informacoes sobre a tela e jogo
SCREEN_WIDTH = 400
SCREEN_HEIGHT = 600
SPEED = 5
SCORE = 0

# ? configuracao fontes
font = pygame.font.SysFont("Verdana", 60)
font_small = pygame.font.SysFont("Verdana", 20)
game_over = font.render("Game Over", True, BLACK)  # cria grafico para a font escolhida

# ? tela
background = pygame.image.load("AnimatedStreet.png")

# tela em branco
DISPLAY_SURF = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
DISPLAY_SURF.fill(WHITE)
pygame.display.set_caption("Game")

# ? cria objetos do jogo
player = Player(SCREEN_WIDTH)
enemy1 = Enemy(SCREEN_WIDTH, SPEED)

# ? cria grupos de sprites
# uso de sprites e mais facil de gerenciar e acessar
enemies = pygame.sprite.Group()
enemies.add(enemy1)

all_sprites = pygame.sprite.Group()
all_sprites.add(player)
all_sprites.add(enemy1)  # .add(obj) adiciona no sprite.Group()

# ? adicionar novo User Event
# evento chamado INC_SPEED usando .USEREVENT e adiciona 1 para ter id unica
INC_SPEED = pygame.USEREVENT + 1
pygame.time.set_timer(INC_SPEED, 1000)  # chama evento INC_SPEED a cada 1000 ms = 1s

# Game Loop
while True:
    # percorre eventos
    for event in pygame.event.get():
        if event.type == INC_SPEED:
            SPEED += 0.5

        if event.type == QUIT:
            pygame.quit()
            sys.exit()

    DISPLAY_SURF.blit(background, (0, 0))
    # renderiza fonte do score, precisa rodar dentro do game loop porque atualiza seu valor
    # fonte do game_over fica fora para evitar problema de performance
    scores = font_small.render(str(SCORE), True, BLACK)
    DISPLAY_SURF.blit(scores, (10, 10))  # fonte, posicao

    # ? move e redesenha todos sprites
    for entity in all_sprites:
        DISPLAY_SURF.blit(entity.image, entity.rect)  # desenha
        entity.move()  # nesse caso, como todos inimigos possuem move(), faz cada um se mover

    # ? roda quando ocorre colisão entre Player e Inimigo
    # spritecollideany(sprite, SpriteGroup) -> ve se o primeiro esta colidindo com algum do grupo
    if pygame.sprite.spritecollideany(player, enemies):
        pygame.mixer.Sound("crash.wav").play()
        sleep(0.5)

        DISPLAY_SURF.fill(RED)  # preenche a tela em vermelho
        DISPLAY_SURF.blit(game_over, (30, 250))
        pygame.display.update()

        for entity in all_sprites:
            entity.kill()  # encerra os sprites e os tira do grupo

        sleep(2)
        pygame.quit()
        sys.exit()

    pygame.display.update()
    FPS.tick(FPS_VALUE)
