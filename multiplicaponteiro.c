#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 4, b = 5, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    *p3 = *p1**p2;

    printf("%d \n", *p3);
    
}