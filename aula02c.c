#include <stdio.h>

void main() {
    int x=3;
    int* p; //ponteiro para um inteiro
    
    //p aponta para x
    p = &x; //conte�do de p � end.mem�ria de x
    
    printf ("End.mem�ria de x: %p \r\n", &x);
    printf ("Valor de p: %p \r\n", p); //end.mem�ria de x
    printf ("Valor de x: %i \r\n", x);
    printf ("Valor de *p: %i \r\n", *p); //*p valor variavel apontada por p
    
    *p = 10; //a vari�vel apontada por p recebe 10
    
    printf("Valor de x: %i \r\n", x);
}

