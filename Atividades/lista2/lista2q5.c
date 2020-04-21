#include <stdlib.h>
#include <stdio.h>

struct s_aluno
{
    int matricula;
    char nome[30];
    float media;
};

int main()
{

    struct s_aluno aluno;
    struct s_aluno *ptr;
    
    ptr = &aluno;

    aluno.matricula = 1712130023;
    aluno.nome[30] = "joaoResende";
    aluno.media = 10.5;

    printf("\n o elemento matricula:%d", ptr->matricula);
    printf("\n o elemento nome:%c", ptr->nome);
    printf("\n o elemento media:%f", ptr->media);

    return 0;
}