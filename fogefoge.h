#ifndef _FOGEFOGE_H_
#define _FOGEFOGE_H_
#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define BOMBA 'b'
#include "mapa.h"

void move(char direcao);
int acabou();
int ehdirecao (char direcao);
void fantasmas();
int praondefatasmavai(int xatual, int yatual,
     int* xdestino, int* Ydestino);
void explodepilula();
void explodepilula2(int x, int y,int somax, int somay, int qtd);
#endif