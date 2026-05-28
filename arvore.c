#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore.H"


Arvore* criar(Arvore *a, int valor){

    if (a == NULL)
    {
        a=(Arvore*)malloc(sizeof(Arvore));
        a->No = valor;
        a->esq = NULL;
        a->dir = NULL;
    }

    else if (valor > a->No) {
        a->dir = criar(a->dir,valor);
    }

    else {
        a->esq = criar(a->esq, valor);
    }

    return a;
    
}

void pre_ordem(Arvore* a){
    if(a != NULL){
        printf("%d ", a->No);
        pre_ordem(a->esq);
        pre_ordem(a->dir);
    }
}


void exibir_arvore(Arvore* a, int nivel){
    
    
    if(a == NULL){
        return;
    }

    exibir_arvore(a->dir, nivel + 1);

    for(int i = 0; i < nivel; i++){
        printf("    ");
    }

    printf("%d\n", a->No);

    exibir_arvore(a->esq, nivel + 1);
}
