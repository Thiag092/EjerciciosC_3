/* Generar una matriz de Ventas de 6 filas por 12 columnas ingresando por teclado el importe vendido 
en cada una de las sucursales (filas) en cada mes (columna) del año 2019. 
Se desea conocer el máximo monto de venta y a qué sucursal corresponde. 
Informar los resultados pedidos.

Objetivo: conocer el máximo monto de venta y a que sucursal corresponde.
Nombre: generarMatrizDeVentas
Estrategia: 
	Cargar matriz de ventas de las sucursales y meses 
	Procesar datos en la matriz
		Detectar Mayor
	Informar el mayor y la sucursal
*/
#include <stdio.h>
#define FILA 2
#define COLUMNA 4

typedef float tm_Venta[FILA][COLUMNA];

void inicializarVariables();
void cargarMatrizVentas(tm_Venta);
void procesarDatosMatriz(tm_Venta);
void detectarMayorVenta(float, int);
void informarMayorYSucursal();

float mayor;
int sucursalMayor;

int main(){
	tm_Venta vm_Venta;  /* Definición de la variable matriz como local */
	
	inicializarVariables();
	cargarMatrizVentas(vm_Venta);
	procesarDatosMatriz(vm_Venta);
	informarMayorYSucursal();
	return 0;
}

void inicializarVariables(){
	mayor = -999;
	sucursalMayor = -1;
}
void cargarMatrizVentas(tm_Venta p_Venta){
	int i, j;
	printf("Ingrese las ventas de cada sucursal en los meses del a%co: \n", 164);
	for(i = 0; i < FILA; i++){
		printf("Sucursal %d: \n", i+1);
		for(j = 0; j < COLUMNA; j++){
			printf("\tMes %d: ", j+1);
			scanf("%f", &p_Venta[i][j]);
		}
	}
	printf("\n");
}
void procesarDatosMatriz(tm_Venta p_Venta){
	int i, j;
	for(i = 0; i < FILA; i++){
		for(j = 0; j < COLUMNA; j++){
			detectarMayorVenta(p_Venta[i][j], i+1);
		}
	}
}
void detectarMayorVenta(float p_MontoVenta, int p_Sucursal){
	if (p_MontoVenta > mayor){
		mayor = p_MontoVenta;
		sucursalMayor = p_Sucursal;
	}
}

void informarMayorYSucursal(){
	printf("El mayor monto vendido fue $%.2f y corresponde a la sucursal numero %d\n", mayor, sucursalMayor);
}

