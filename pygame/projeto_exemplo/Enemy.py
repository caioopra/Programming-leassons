import pygame
from pygame.locals import *
from random import randint


class Enemy(pygame.sprite.Sprite):
    def __init__(self, screen_width: int, speed: int):
        super().__init__()
        self.__image = pygame.image.load("Enemy.png")
        self.__screen_width = screen_width
        self.__rect = (
            self.__image.get_rect()
        )  # define bordas do sprite (retangulo do tamanho da imagem)
        self.__rect.center = (
            randint(40, self.screen_width - 40),
            0,
        )  # define posicao inicial para o retangulo
        self.__speed = speed

    @property
    def image(self):
        return self.__image

    @property
    def rect(self):
        return self.__rect

    @property
    def speed(self):
        return self.__speed

    @property
    def screen_width(self):
        return self.__screen_width

    def move(self):
        self.rect.move_ip(0, self.speed)

        if self.rect.bottom > 600:
            self.rect.top = 0
            self.rect.center = (randint(30, 370), 0)
