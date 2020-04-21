#include <stdlib.h>
#include <stdio.h>

int maior(int a,int b){
    if(a > b) return 1;
    else return 0;
}
int menor(int a,int b){
    if(a < b) return 1;
    else return 0;
}
void imprime(int *vetor){
    for(int i = 0; i<10 ;i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
}
int ordena(int *vetor,int *ptr(int a,int b)){
    for(int i;i<10;i++){
        for(int j = i;j<10;j++){
            if(*ptr(vetor[i],vetor[j])){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            };
        }
    }
}

int main (){
    int v[10] = {5, 6, 8, 1, 2, 0, 3, 4, 7, 9};
    ordena(v,maior);
    imprime(v);
    ordena(v,menor);
    imprime(v);


}