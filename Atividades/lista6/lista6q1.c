#include <stdio.h>

int main() {

FILE *arqui;

arqui = fopen("arquivo.txt","a+");

if(arqui == NULL){
    printf("Problema ao abrir o arquivo");
}


fclose(arqui);
printf("Aperte um tecla para finalizar..");
getchar();


return 0;

}