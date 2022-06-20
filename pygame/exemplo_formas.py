import pygame, sys
from pygame.locals import *

# inicializa programa
pygame.init()

# valor para FPS
FPS_VAL = 30
FPS = pygame.time.Clock()

# cor para objetos em RGB
BLUE = (0, 0, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

# tela de 300x300 pixels com titulo
displaySurface = pygame.display.set_mode((300, 300))
displaySurface.fill(WHITE)
pygame.display.set_caption("Exemplo")

# criar linhas e formas
pygame.draw.line(displaySurface, BLUE, (150, 130), (130, 170), 2)
pygame.draw.line(displaySurface, BLUE, (150,130), (170,170), 2)
pygame.draw.line(displaySurface, GREEN, (130,170), (170,170))
pygame.draw.circle(displaySurface, BLACK, (100,50), 30)
pygame.draw.circle(displaySurface, BLACK, (200,50), 30)
# rect(..., (X_inicial, Y_inicial, largura_retangulo, altura_retangulo))
pygame.draw.rect(displaySurface, RED, (100, 200, 100, 50), 2)
pygame.draw.rect(displaySurface, BLACK, (110, 260, 80, 5))

# game loop
while True:
    pygame.display.update()
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            sys.exit()
    FPS.tick(FPS_VAL)