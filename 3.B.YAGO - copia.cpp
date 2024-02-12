#include <stdio.h>
#define SUCURSALES 2
#define MESES 4
typedef float tm_matriz [SUCURSALES][MESES];

void iniciaMatriz();
float calcularVentaMaxinma(tm_matriz);
int calcularSucursalMaxima(tm_matriz);
float sumaSucursal1(tm_matriz);
void imprimirResultados(tm_matriz);

tm_matriz matriz;

int main(){
	iniciaMatriz();
	calcularVentaMaxinma(matriz);
	calcularSucursalMaxima(matriz);
	sumaSucursal1(matriz);
	imprimirResultados(matriz);
	return 0;
} 
void iniciaMatriz(){
	int i, j;
	printf ("Ingtrese el total de ventas de cada sucursal\n");
	for (i=0;i<SUCURSALES;i++){
		printf ("Sucursal numero %d\n", i+1);
		for (j=0;j<MESES;j++){
			printf ("Mes numero %d\t", j+1);
			fflush (stdin);
			scanf ("%f", &matriz [i][j]);
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
 float sumaSucursal1(tm_matriz pSuma){
 	int i, j;
	float suma=0;
	for (j=0; j<MESES;j++){
		suma = suma + pSuma [0][j];
	}
	return suma;
 }
void imprimirResultados(tm_matriz pMatriz){
	printf ("El maximo monto de venta es de $%.2f\n", calcularVentaMaxinma(matriz));
	printf ("La sucursal que mas vendio es la numero %d\n", calcularSucursalMaxima(matriz));
	printf ("El total de ventas de la primer sucursal es de $%.2f", sumaSucursal1(matriz));
}

