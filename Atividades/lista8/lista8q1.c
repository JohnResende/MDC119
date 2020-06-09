#include<stdio.h>
#include<string.h>

int main(){
FILE *arqui;
int i=0;
struct {
char nome[30];
char matricula[10];

} aluno;
memset(&aluno, 0, sizeof(aluno));


arqui=fopen("alunos.dat","w+b");
if (arqui == NULL) {
        printf("PROBLEMA\n");
    }


printf("matricula ");
scanf("%s", aluno.matricula);

while(strcmp("0",aluno.matricula)){

printf("nome ");
scanf("%s", aluno.nome);

fwrite(&aluno, sizeof(aluno), 1, arqui);
i++;

printf("matricula ");
scanf("%s", aluno.matricula);

}

fclose(arqui);

arqui = fopen("alunos.dat", "rb"); 
fseek(arqui, 0 , SEEK_SET);
memset(&aluno, 0, sizeof(aluno));

while(fread(&aluno, sizeof(aluno), 1, arqui)!= 0){
    printf("%s - %s\n", aluno.matricula, aluno.nome);
   
}
fclose(arqui);
return 0;

}