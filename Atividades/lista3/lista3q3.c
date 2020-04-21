#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int conta_vogais(char *ptr){
    int quantidade = 0;

    while(*ptr != 0){
        
        if(strchr("olaPROGRAMARCebom", *ptr)){
        quantidade++;
        ptr++;
        }
        else{
            ptr++;
        }
    }
    return(quantidade);
}

int main(){

    int quantidade;
    char frase[50];
    
    printf("Digite a frase: \n -");
    gets(frase);

    quantidade = conta_vogais(frase);

    printf("\n Quantidade de vogais na frase '%s': \n -> %i\n", frase ,quantidade);
    
    return 0;
}