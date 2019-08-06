#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;

    printf("Quantos nº ?\n");
    scanf("%d", &n);

    float*v=malloc(sizeof(float)*n);

    for(i=0;i<n;i++) {
        printf("V[%d] = ", i);
        scanf("%f", &v[i]);  // &v[i] == v+i
    }
    for(i=0;i<n;i++) {
        printf("V[%d](%p) = %.2f\n", i, &v[i], v[i]);    
    }
    free(v);
}