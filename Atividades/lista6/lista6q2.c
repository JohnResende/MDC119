#include <stdio.h>

int main() {

FILE *arqui;

arqui = fopen("arquivo.bin","w+b");

if(arqui == NULL){
    printf("Problema ao abrir o arquivo");
}


printf("Aperte uma tecla para finalizar..");
getchar();

if(feof(arqui)==0){
    printf("Arquivo pronto\n");
    return 1;
    
}

fclose(arqui);

return 0;

}