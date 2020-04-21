
#include <stdio.h>

int main(){

    int i,a,p;
    printf("Digite o tamanho do array: ");
    scanf("%i", &a);

    printf("\n");

    int array[a];
    for(i=0;i<a;i++){
        p=i+1;
        printf("Digite o %i° numero: ",p);
        scanf("%i", &array[i]);
    }
    printf("\n>\a");
    for(i=0;i<a;i++){
        printf("%i\a", array[i]);
    }
    printf("\n<\a");

    for(i=a-1;i>=0;i--){
        printf("%i\a", array[i]);
    }

    printf("\n");

    return 0;
}