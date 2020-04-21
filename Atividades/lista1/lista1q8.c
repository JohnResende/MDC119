#include <stdio.h>

int main(){

    int i,t,a,m;
    float mediatotal;

    printf("Digite o numero de alunos:\n-");
    scanf("%i", &t);
    
    float notas [t][3];

    for(i=0;i<t;i++){
        a = i + 1;
        printf("Digite a primeira nota do %i° aluno: ", a);
        scanf("%f", &notas[i][0]);
        printf("Digite a segunda nota do %i° aluno: ", a);
        scanf("%f", &notas[i][1]);
        notas[i][2] = (notas[i][0]+notas[i][1])/2;
        mediatotal = notas[i][2] + mediatotal;
    }

    a = 0; 
    mediatotal = mediatotal/t;

    printf("\n\tnota 1\tnota 2\tmedia\tSituacao\n");

    for(i=0;i<t;i++){
        a = i + 1;
        printf("Aluno%i- ",a);
        for(m=0;m<3;m++){
            printf("%.2f\t", notas[i][m]);
        }
        if(notas[i][2]>=5){
            printf("Aprovado");
        }
        else{
            printf("Reprovado");
        }
        printf("\n");
    }

    printf("\nMedia total: %.2f\n", mediatotal);

    return 0;
}