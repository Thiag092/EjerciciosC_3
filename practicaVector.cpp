#include <stdio.h>
#define VECTOR 5

typedef int tVector [VECTOR];
void cargarVector();
void imprimirVector(tVector);

tVector unVector;

int main (){
		
	cargarVector();
	imprimirVector(unVector);
	
	return 0;
}

void cargarVector(){
	int i;
	for (i=0; i<VECTOR; i++){
		printf ("Ingrese valor %d: \n", i+1);
		scanf ("%d", &unVector[i]);
	}
}
void imprimirVector(tVector pUnVector){
	
	int i;
	printf ("\nLos valores ingresados son: \n");
	for (i=0; i<VECTOR; i++){
		printf ("%d\n",pUnVector[i]);
	}
	
}
