#include <stdio.h>

void main() {
    int x=3;
    int* p; //ponteiro para um inteiro
    
    //p aponta para x
    p = &x; //conteúdo de p é end.memória de x
    
    printf ("End.memória de x: %p \r\n", &x);
    printf ("Valor de p: %p \r\n", p); //end.memória de x
    printf ("Valor de x: %i \r\n", x);
    printf ("Valor de *p: %i \r\n", *p); //*p valor variavel apontada por p
    
    *p = 10; //a variável apontada por p recebe 10
    
    printf("Valor de x: %i \r\n", x);
}

