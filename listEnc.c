#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[15];
    int idade;
    struct aluno * proximo;
    
} Aluno;

int main(){

    Aluno * ini_aluno;
    Aluno * proximo_aluno;
    int resp;

    ini_aluno = malloc(sizeof(Aluno));
    proximo_aluno = ini_aluno;

    while (1)
    {
        printf("\n");
        printf("Digite o nome = ");
        scanf("%s", &proximo_aluno->nome);



    }

}

