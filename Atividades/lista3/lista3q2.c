#include <stdlib.h>
#include <stdio.h>

int converte_hhmmss_em_segundos(int h, int m, int s){
    int resultado;

    resultado = h*3600 + m*60 + s;



    return(resultado);
}

int main(){
    int resultado;
    int horas, minutos, segundos;

    printf("\nDigite o valor de horas:\n -");
    scanf("%i", &horas);

    printf("Digite o valor de minutos: \n -");
    scanf("%i", &minutos);   

    printf("Digite o valor de segundos: \n -");
    scanf("%i", &segundos);

    resultado = converte_hhmmss_em_segundos(horas, minutos, segundos);

    printf("\n Valor de \\%i:%i:%i\\ em segundos\n -> %i segundos\n", horas, minutos, segundos ,resultado);

    return 0;
}