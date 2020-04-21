#include <stdio.h>

int main(){

    int i,p;

    int array[10];
    for(i=0;i<10;i++){
        p=i+1;
        printf("Digite o %i° numero: ",p);
        scanf("%i", &array[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%i\a", array[i]);
    }
    
    return 0;
}
