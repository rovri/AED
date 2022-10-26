#include <stdio.h>
#include locale.h

int* inicializa(){

    *lista = (elemento*)malloc(sizeof(elemento));
    lista[0]->num = -1;
    lista[0]->prox = -1;
}




int main(){

    setlocale(LC_ALL,"");

    typedef struct el{
        int num;
        struct el* prox;
    } elemento;



}

