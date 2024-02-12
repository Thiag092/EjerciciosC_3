#include <stdio.h>
#define MESES 3
#define DIAS 5

typedef int tm_matriz[MESES][DIAS];
typedef int tv_vector [MESES];

void iniciarVector();
void iniciarMatriz();
void sumarMatriz();
void calcularTotal(tm_matriz);
void calcularMesMayor(tm_matriz);
void calcularMesMenor(tm_matriz);
void imprimirResultados(tm_matriz);

	tm_matriz vm_matriz;
	tv_vector vv_vector;
	int i,j;
	int mayoresCasos=-9999;
	int mesMayor;
	int diaMayor;
	int menoresCasos=9999;
	int mesMenor;
	int diaMenor;
	int total;
	
int main (){
	iniciarVector();
	iniciarMatriz();
	sumarMatriz();
	calcularTotal(vm_matriz);
	calcularMesMayor(vm_matriz);
	calcularMesMenor(vm_matriz);
	imprimirResultados(vm_matriz);
	return 0;
}
void iniciarVector(){
	for (i=0;i<MESES;i++){
		vv_vector[i]=0;
	}
}
void iniciarMatriz(){
	printf ("Ingrese la cantidad de casos registrados\n");
	for (i=0;i<MESES;i++){
		printf ("Ingrese casos del mes %d: \n", i+1);
		for (j=0;j<DIAS;j++){
			printf ("Dia N%d\t", j+1);
				scanf ("%d", &vm_matriz[i][j]);
		}
		printf("\n");
	}
}

void calcularTotal(tm_matriz pTotal){
	for (i=0;i<MESES;i++){
		for (j=0;j<DIAS;j++){
			total = total +pTotal[i][j];
		}
	}
}
void calcularMesMayor(tm_matriz pMesMayor){
	for (i=0;i<MESES;i++){
		for (j=0;j<DIAS;j++){
			if( pMesMayor[i][j]>mayoresCasos){
				mayoresCasos=pMesMayor[i][j];
				mesMayor=i+1;
				diaMayor=j+1;	
			}
		}
	}
}
void sumarMatriz(){
   for (i=0; i < MESES; i++){
        for (j=0; j < DIAS; j++){
           vv_vector [i] = vv_vector[i] + vm_matriz[i][j];	
        }		
   }			
}
void calcularMesMenor(tm_matriz pMesMenor){
	for (i=0;i<MESES;i++){
		for (j=0;j<DIAS;j++){
			if( pMesMenor[i][j]<menoresCasos){
				menoresCasos=pMesMenor[i][j];
				mesMenor=i+1;
				diaMenor=j+1;
			}
		}
	}
}
void imprimirResultados(tm_matriz pMatriz){
	printf("La cantidad de casos durante los tres meses fueron: \n");
	for (i=0;i<MESES;i++){
		printf("\nMes numero %d\n", i+1);
		for (j=0;j<DIAS;j++){
		printf ("%d\t", pMatriz[i][j]);
		}
		printf("\n");
	}
	printf("Con un total de: %d  \n", total);
   	for (i=0; i < MESES; i++){
        printf("\nEl total del mes %d fue de: %d \n", i+1, vv_vector [i]);
   	}	
	printf("\nEl mes que mas casos tuvo fue el: %d , el dia %d con %d casos \n", mesMayor, diaMayor, mayoresCasos);
	printf("\nEl mes que menos casos tuvo fue el: %d , el dia %d con %d casos \n", mesMenor, diaMenor, menoresCasos);
}
