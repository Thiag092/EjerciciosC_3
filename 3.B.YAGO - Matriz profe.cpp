#include <stdio.h>
#define SUCURSALES 2
#define MESES 4
typedef float tm_matriz [SUCURSALES][MESES];
typedef float tv_vector [SUCURSALES];

void iniciarVector();
void iniciaMatriz();
float calcularVentaMaxinma(tm_matriz);
int calcularSucursalMaxima(tm_matriz);
float calcularTotalSucursales(tv_vector,tm_matriz);
void imprimirResultados(tv_vector,tm_matriz);

tm_matriz vm_matriz;
tv_vector vv_vector;

int main(){
	iniciarVector();
	iniciaMatriz();
	calcularVentaMaxinma(vm_matriz);
	calcularSucursalMaxima(vm_matriz);
	calcularTotalSucursales(vv_vector, vm_matriz);
	imprimirResultados(vv_vector, vm_matriz);
	return 0;
} 
void iniciarVector(){
	int i;
	for (i=0;i<SUCURSALES;i++){
		vv_vector[i]=0;
	}
}
void iniciaMatriz(){
	int i, j;
	printf ("Ingtrese el total de ventas de cada sucursal\n");
	for (i=0;i<SUCURSALES;i++){
		printf ("Sucursal numero %d\n", i+1);
		for (j=0;j<MESES;j++){
			printf ("Mes numero %d\t", j+1);
			fflush (stdin);
			scanf ("%f", &vm_matriz [i][j]);
		}
	}
}
float calcularVentaMaxinma(tm_matriz pVentaMax){
	int i, j;
	float auxVentaMax = -9999;
	for (i=0;i<SUCURSALES;i++){
		for (j=0;j<MESES;j++){
			if(pVentaMax [i][j]>auxVentaMax){
				auxVentaMax = pVentaMax [i][j];
			}
		}
	}
	return auxVentaMax;
}
int calcularSucursalMaxima(tm_matriz pMaxSuc){
	int i, j, filaMax;
	float maxSuc = -9999;
	for (i=0;i<SUCURSALES;i++){
		for (j=0;j<MESES;j++){
			if (pMaxSuc [i][j]>maxSuc){
				maxSuc = pMaxSuc [i][j];
				filaMax=i+1;	
			}
		}
	}
	return filaMax;
}
 float calcularTotalSucursales(tv_vector pVector, tm_matriz pMatriz){
 	int i, j;
 	for(i=0;i<SUCURSALES;i++){
 		for (j=0;j<MESES;j++){
 			pVector[i]=pVector[i] + pMatriz[i][j];
 		}
 	}
 	return pVector[i];
 
 }
void imprimirResultados(tv_vector pVector,tm_matriz pMatriz){
	int i;
	printf ("El maximo monto de venta es de $%.2f\n", calcularVentaMaxinma(vm_matriz));
	printf ("La sucursal que mas vendio es la numero %d\n", calcularSucursalMaxima(vm_matriz));
	for (i=0;i<SUCURSALES;i++){
	printf ("El total de ventas de la sucursal %d es $%.2f\n", i+1, vv_vector[i]);
}
}

