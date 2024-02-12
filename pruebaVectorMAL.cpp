#include <stdio.h>

void cargarVector();
void imprimirVector(int);

int unVector [5];

int main (){
		
	cargarVector();
	imprimirVector(unVector);
	
	return 0;
}

void cargarVector(){
	int i;
	for (i=0; i<5; i++){
		printf ("Ingrese valor %d: \n", i+1);
		scanf ("%d", &unVector[i]);
	}
}
void imprimirVector(int pUnVector){
	
	int i;
	printf ("\nLos valores ingresados son: \n");
	for (i=0; i<5; i++){
		printf ("%d\n",pUnVector[i]);
	}
	
}
