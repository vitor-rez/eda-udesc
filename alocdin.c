#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 3;
    int *p;

    p = malloc(sizeof(int));
    scanf("%d", p);

    printf("%d \n ",*p);

    *p = x + 1;

    printf("%d \n", *p);


    printf("x = %p, p = %p, alocado = %p\n ", &x, &p, p); //mostra o endereço onde esta armazenado os ponteiros.

    free(p); //libera memória
}