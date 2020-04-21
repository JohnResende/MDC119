#include <stdio.h>
#include <stdlib.h>

int is_bissexto(int i){

    int resultado;

    if((i%4==0 && i%100!=0) || (i%400==0)){
        resultado = 1;
    }
    else{
        resultado = 0;
    }

    return(resultado);
}

int main(){

    int ano;
    int resultado;

    printf("\nDigite o ano: \n-");
    scanf("%i", &ano);

    resultado = is_bissexto(ano);
    if(resultado==1){
        printf("\n%i e um ano bissexto \n", ano);
    }
    else{
        printf("\n%i nao e um ano bissexto \n", ano);
    }

    return 0;
}