#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

    union u_numeros_inteiros
    {
        char caracter;
        short int inteiro_curto;
        int inteiro;
        long int inteiro_longo;
    };

int main(){

    union u_numeros_inteiros numero[4];

    numero[0].caracter = 'a';
    printf("\n%c\n", numero[0].caracter);

    numero[1].inteiro_curto = 10;
    printf("%i\n", numero[1].inteiro_curto);

    numero[2].inteiro = 99;
    printf("%i\n", numero[2].inteiro);

    numero[3].inteiro_longo = 11245;
    printf("%i\n", numero[3].inteiro_longo);

    printf("\t%c\t%i\t%i\t%i\n", numero[0].caracter, numero[1].inteiro_curto, numero[2].inteiro, numero[3].inteiro_longo);

    return 0;
}