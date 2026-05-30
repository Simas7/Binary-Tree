#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#ifndef ARVORE_H
#define ARVORE_H
typedef struct arvore
{   
    int No;

    struct arvore *esq;
    struct arvore *dir;
    
} Arvore;


Arvore* criar(Arvore* a, int valor);

void exibir_arvore(Arvore* a, int nivel);
void pre_ordem(Arvore* a);
void pos_ordem(Arvore* a);
void em_ordem(Arvore* a);
int menor_no(Arvore* a);
int maior_no(Arvore* a);
#endif