#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *arqui;
arqui= fopen("TEXTO2.txt", "w");
int i=0;
char nome[30];
char matricula[10];


printf("matricula ");
memset(matricula, '\0', sizeof(matricula));
scanf("%s",matricula);



while (strcmp("0", matricula)){

    fputs(matricula, arqui);


    printf("nome ");
    memset(nome, '\0', sizeof(nome));
    scanf("%s",nome);
    fputs(nome, arqui);
    
 
    printf("matricula ");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",matricula);
     
}
fclose(arqui);

arqui=fopen("TEXTO2.txt","r");


while(fgets(matricula,10,arqui)!=NULL){
    printf("%s", matricula);
  
}


return 0;

}