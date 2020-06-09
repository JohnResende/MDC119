#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE *arqui;
arqui= fopen("TEXTO3.txt", "w");
int i=0;
char nome[30];
char matricula[10];


printf("matricula ");
memset(matricula, '\0', sizeof(matricula));
scanf("%s",matricula);


while (strcmp("0", matricula)){

    printf("nome ");
    memset(nome, '\0', sizeof(nome));
    scanf("%s",nome);

    fprintf(arqui,"%10s\t%30s\n",matricula,nome);
    
 
    printf("matricula ");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",matricula);
     

//fprintf no formato %10s\t%30s\n.
}
fclose(arqui);
arqui= fopen("TEXTO3.txt", "r");
while (fscanf (arqui,"%10s\t%30s", matricula, nome) != EOF) {

printf("%s - %s\n",matricula,nome);
}





}