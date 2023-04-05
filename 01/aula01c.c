#include <stdio.h> //printf/ scanf

typedef enum {
    segunda,
    terca,
    quarta,
    quinta,
    sexta
} dias_da_semana;

void main() {
    dias_da_semana dia;
    dia = segunda;
    printf("dia %d \r\n", dia+1);
}
