#include <stdio.h>

typedef struct { //define a estrutura como um tipo de dado
    int id;
    float altura;
    float peso;
} Usuario; //nome de nosso registro/estrutura/entidade/objeto

void main() {
    //criando um vetor de tamanho 5, do tipo Usuario
    Usuario usuario[5];
    
    //para saber o taanho de um vetor de struct fazemos: sizeof(usuario)/sizeof(usuario[0])
    //pois sizeof retorna o tamanho da estrutura em bytes
    
    for (int i=0; i<( sizeof(usuario)/sizeof(usuario[0]) ); i++ ) {
        
        usuario[i].id = i;
        
        printf("Digite a altura do usuario%i:  \r\n", i+1);
        scanf("%f", &usuario[i].altura);
        
        printf("Digite o peso do usuario%i:  \r\n -- \r\n", i+1);
        scanf("%f", &usuario[i].peso);
    }
    
    //exibindo 
    printf("--\r\n Usuario1 peso: %f \r\n", usuario[0].peso);
    printf("Usuario3 altura: %f \r\n", usuario[2].altura);
}
