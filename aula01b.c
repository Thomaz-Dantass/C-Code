#include <stdio.h> //standard INPUT OUTPUT

void main () {
	int v[3];
	
	printf("Tamanho em bytes: %d \r\n", sizeof(v));
	printf("Quantidade de elementos %d \r\n", sizeof(v)/sizeof(int));
	
	v[0]=3; v[1]=8; v[2]=5;
	
	int i;
	for (i=0; 0<1; i++) 
	{
		v[i] = 9;
		printf("%d \r\n", v[i]);
	}
}
