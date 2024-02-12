#include <stdio.h>
#define MAX_I 3
#define MAX_J 2

void inicializarVector();
void cargarMatriz();
void sumarMatriz();
void mostrarVectorSuma();
void mostrarMatrizVector();

typedef  int  tm_ntbk[MAX_I][MAX_J];
tm_ntbk   vm_ntbk;

typedef  int  tv_suma[MAX_I];
tv_suma  vv_suma;

int i, j; 

int main(){
	inicializarVector();
	cargarMatriz();
	sumarMatriz();
	mostrarVectorSuma();	
	mostrarMatrizVector();
	return 0;
}
void inicializarVector(){
   for (i=0; i < MAX_I; i++){
       vv_suma [i] = 0;
   }			
}

void cargarMatriz(){
     printf("Ingrese los elementos de la matriz: \n");
     for (i=0; i < MAX_I; i++){
        for (j=0; j < MAX_J; j++){
           printf("Elemento %d-%d: ", i+1, j+1);
           scanf("%d", &vm_ntbk[i][j]);		
           printf("\n");	
        }		
    }			
}

void sumarMatriz(){
   for (i=0; i < MAX_I; i++){
        for (j=0; j < MAX_J; j++){
           vv_suma [i] = vv_suma[i] + vm_ntbk[i][j];	
        }		
   }			
}

void  mostrarVectorSuma(){
	printf("\nMostrar vector suma: \n");
   	for (i=0; i < MAX_I; i++){
        printf("Elemento %d-%d: \n", i+1, vv_suma [i]);
   	}			
}

void  mostrarMatrizVector(){
	printf("\nMostrar matriz y vector suma: \n");
   	for (i=0; i < MAX_I; i++){
   		printf("Fila %d:", i+1);
        for (j=0; j < MAX_J; j++){
        	printf("%d ", vm_ntbk[i][j]);	
        }		
        printf("= %d\n", vv_suma[i]);
     }		
}


