#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p, i ,j;
    int v[5];
    int *v2[3];

    for(i=0;i<3;i++) {
        v2[i]=malloc(sizeof(int)*3);
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("M[%d, %d] ", i, j);
            scanf("%d", &v2[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0;j< 3;j++) {
            printf("%d ", v2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        free(v2[i]);
    }
}
