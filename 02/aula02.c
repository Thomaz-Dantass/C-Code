#include <stdio.h>

//Declarando a estrutura (Struct) Aluno como um tipo de dado (typedef):
typedef struct {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
} Aluno;

int main() {
    //declarando duas variáveis do tipo aluno:
    Aluno aluno1, aluno2;

    //atribuindo valor aos atributos dos alunos
    aluno1.nota1 = 7.5;
    aluno1.nota2 = 8.5;
    aluno1.nota3 = 7.7;
    aluno1.nota4 = 9.8;

    aluno2.nota1 = 3.5;
    aluno2.nota2 = 2.5;
    aluno2.nota3 = 1.5;
    aluno2.nota4 = 5.5;

    //calculando a média das notas:
    aluno1.media = (aluno1.nota1 + aluno1.nota2 + aluno1.nota3 + aluno1.nota4)/4;
    aluno2.media = (aluno2.nota1 + aluno2.nota2 + aluno2.nota3 + aluno2.nota4)/4;

    printf("Media aluno1: %f \r\n Media Aluno2: %f \r\n", aluno1.media, aluno2.media);
    return 0;
}

