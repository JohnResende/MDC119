#include <stdio.h>

int main()
{
    int segundos;

    printf("Digite o numero a ser convertido:");
    scanf("%d", &segundos);

    int horas = segundos/3600;
    segundos = segundos%(3600);
    int minutos = segundos/60;
    segundos = segundos%60;

    printf("Horas:%d", horas);
    printf("\nMinutos:%d", minutos);
    printf("\nSegundos:%d\n", segundos);
   
    return 0;
}