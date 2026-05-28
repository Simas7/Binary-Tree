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

    pre_ordem(a);

}