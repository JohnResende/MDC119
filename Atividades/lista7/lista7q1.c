#include <stdio.h>
#include <string.h>

void main()
{
    FILE *arqui;
    char nome[30];
    char matricula[10];
    char caracter;

    arqui = fopen("alunos.txt", "w+");

    if (arqui == NULL)
    {
        printf("Problemas ao criar o arquivo\n");
        return;
    }

    memset(matricula, sizeof(matricula), 0);
    printf("matricula: ");
    scanf("%s", matricula);
    getchar();

    while (strcmp(matricula, "0"))
    {
        for (int i = 0; i < strlen(matricula); i++)
        {
            fputc(matricula[i], arqui);
        }

        memset(nome, sizeof(nome), 0);
        printf("nome ");
        scanf("%s", nome);
        getchar();

        for (int i = 0; i < strlen(nome); i++)
        {
            fputc(nome[i], arqui);
        }

        memset(matricula, sizeof(matricula), 0);
        printf("matricula ");
        scanf("%s", matricula);
    
    }

    fclose(arqui);

    arqui = fopen("alunos.txt", "r");


    caracter = fgetc(arqui);

    while (!feof(arqui))
    {
        printf("%c", caracter);
        caracter = fgetc(arqui);
    }

    fclose(arqui);

    return;
    
}