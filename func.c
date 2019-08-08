#include<stdio.h>
#include<stdlib.h>


void le_vetor(float *p, int k) {
    int i;
    for(i=0;i<k;i++){
        printf("v[%d] = ",i);
        scanf("%f", p+i);
    }
}

void mostra_vetor(float *v, int n) {
    float *i;

    printf("Dados do vetor:\n");

    for(i=v; i<v+n;i++){
        printf("v[%ld] = %.2f\n", i-v , *i);
    }
    printf("\n\n");

}

void ordena_vetor(float *p, int k){
    int i;
    
    for(i=0;i<k-1;i++){
        int j, i_menor = i;
        for(j=i+1;j<k;j++){
            if (p[j]<p[i_menor]) {
                i_menor = j;
            }
        }
    
        float aux = p[i];
        p[i] = p[i_menor];
        p[i_menor] = aux;
    }

   //printf("O menor numero é: %f", aux);
}


int main(){


    int n;
    scanf("%d", &n);
    float *v = malloc(sizeof(float)*n);

    le_vetor(v,n);
    mostra_vetor(v,n);
    ordena_vetor(v,n);
    mostra_vetor(v,n);

    free(v);
    
}


