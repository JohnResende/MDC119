#include <stdio.h>

int main(){

    int ano;

    printf("Digite o ano: ");
    scanf("%i", &ano);

    if((ano%4==0 && ano%100!=0) || (ano%400==0)){
        printf("%i e um ano bissexto\n", ano);
    }
    else{
        printf("%i nao e ano bissexto\n", ano);
    }

    return 0;
}