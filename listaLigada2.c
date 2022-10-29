#include <stdio.h>
#include <stdlib.h>

int main(){

    typedef struct auxElem{
        int reg;
        struct auxElem* prox;
    } elemento;

    elemento x, y;
    x.reg = 23;
    x.prox = &y;
    y.reg = 11;



    elemento* end = &x;
    while(end == &x || end == &y){
        printf("%i\n", end->reg);
        end = end->prox;
    }





    return 0;
}
