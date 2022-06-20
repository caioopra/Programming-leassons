import sys
import pygame
from pygame.locals import *
from time import sleep

from Enemy import Enemy
from Player import Player

pygame.init()

FPS_VALUE = 60
FPS = pygame.time.Clock()

BLUE = (0, 0, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

# Screen information
SCREEN_WIDTH = 400
SCREEN_HEIGHT = 600
SPEED = 5

# tela
DISPLAY_SURF = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
DISPLAY_SURF.fill(WHITE)
pygame.display.set_caption("Game")

player = Player(SCREEN_WIDTH)
enemy1 = Enemy(SCREEN_WIDTH, SPEED)

# create sprites groups
enemies = pygame.sprite.Group()
enemies.add(enemy1)

all_sprites = pygame.sprite.Group()
all_sprites.add(player)
all_sprites.add(enemy1)

# adicionar novo User Event
INC_SPEED = pygame.USEREVENT + 1
pygame.time.set_timer(INC_SPEED, 1000)

while True:
    # percorre eventos
    for event in pygame.event.get():
        if event.type == INC_SPEED:
            SPEED += 2
            
        if event.type == QUIT:
            pygame.quit()
            sys.exit()

    DISPLAY_SURF.fill(WHITE)
    
    # move e redesenha todos sprites
    for entity in all_sprites:
        DISPLAY_SURF.blit(entity.image, entity.rect)  # desenha 
        entity.move()
    
    # roda quando ocorre colisão entre Player e Inimigo
    if pygame.sprite.spritecollideany(player, enemies):
        DISPLAY_SURF.fill(RED)
        pygame.display.update()
        
        for entity in all_sprites:
            entity.kill()
        
        sleep(2)
        pygame.quit()
        sys.exit()

    pygame.display.update()
    FPS.tick(FPS_VALUE)
