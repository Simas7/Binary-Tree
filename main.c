#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore.H"

int main() {

    Arvore* a = NULL;

    a = criar(a, 10);
    a = criar(a, 5);
    a = criar(a, 20);
    a = criar(a, 1);
    a = criar(a, 100);
    a = criar(a, 50);

    printf("\n");
    printf("Atencao! A arvore esta virada 90 graus para esquerda, ou seja, a raiz sera o numero mais a esquerda\n");
    exibir_arvore(a, 0);
    printf("\n");
    pre_ordem(a);
    printf("\n");
    pos_ordem(a);
    printf("\n");
    em_ordem(a);
    printf("\n");
    printf("%d ", maior_no(a));
    printf("\n");
    printf("%d ", menor_no(a));

}