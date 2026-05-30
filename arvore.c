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


//exibe a arvore em pre-ordem

void pre_ordem(Arvore* a){
    if(a != NULL){
        printf("%d ", a->No);
        pre_ordem(a->esq);
        pre_ordem(a->dir);
    }
}


//exibe a arvore por inteiro

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

//exibe a arvore em pos-ordem

void pos_ordem(Arvore* a ){
    if(a != NULL){
        pos_ordem(a->esq);
        pos_ordem(a->dir);
        printf("%d ", a->No);
    }
}

//exibe a arvore em ordem

void em_ordem(Arvore* a){
    if(a != NULL){
        em_ordem(a->esq);
        printf("%d ", a->No);
        em_ordem(a->dir);
    }
}


//exibe o menor no da arvore

int menor_no(Arvore* a){
    if(a->esq != NULL){
        return menor_no(a->esq);
    }
    else{
        return a->No;
    }
}

//exibe o maior no da arvore

int maior_no(Arvore* a){
    if (a->dir != NULL){
        return maior_no(a->dir);
    }
    else{
        return a->No;        
    }
    
}