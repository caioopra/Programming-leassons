import pygame
from pygame.locals import *
import random
import os

class Player(pygame.sprite.Sprite):
    def __init__(self, screen_width: int):
        super().__init__() 
        self.__image = pygame.image.load("Player.png")
        self.__rect = self.__image.get_rect()
        self.rect.center = (160, 520)
        
        self.__screen_width = screen_width
        
    @property
    def image(self):
        return self.__image
    
    @property
    def rect(self):
        return self.__rect
    
    @property
    def screen_width(self):
        return self.__screen_width
 
    def move(self):
        pressed_keys = pygame.key.get_pressed()
                 
        if self.rect.left > 0:  # > 0 garante que para no limite da esquerda da tela
              if pressed_keys[K_LEFT]:
                  self.rect.move_ip(-5, 0)  # move_ip(movimentar_x, movimentar_y)
        if self.rect.right < self.screen_width:        
              if pressed_keys[K_RIGHT]:
                  self.rect.move_ip(5, 0)
