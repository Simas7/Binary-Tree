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

void pre_ordem(Arvore* a);

#endif