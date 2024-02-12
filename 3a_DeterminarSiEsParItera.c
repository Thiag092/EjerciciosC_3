#include <stdio.h>
#define elementos 4 /* se define una constante con el valor de la cantidad de elementos del arreglo */ 

void generarVectorNotas();
void determinaryAcumularAprobados();
void mostrarPromedioYPorcentaje();

typedef float tv_notas[elementos];

tv_notas vv_notas;
int i;
int aprobados;
float sumaNotas;
	
int main(){
	generarVectorNotas();
	determinaryAcumularAprobados();
	mostrarPromedioYPorcentaje();	
	return 0;
}

void generarVectorNotas(){
	printf("Ingrese las %d notas del parcial: \n", elementos);
	
	for (i=0; i<elementos; i++){
		printf("Nota %d: ", i+1);
		scanf("%f", &vv_notas[i]);		
		printf("\n");
	}			
}

void determinaryAcumularAprobados(){
	sumaNotas = 0;
	aprobados = 0;
	for (i=0; i<elementos; i++){
		if(vv_notas[i] >= 6){	
			sumaNotas = sumaNotas + vv_notas[i];
			aprobados = aprobados + 1;
		}
	}		
}

void mostrarPromedioYPorcentaje(){
	float promedio;
	promedio = sumaNotas/aprobados;
	float porcentaje;
	porcentaje = (float)aprobados/elementos*100;
	printf("El promedio de aprobados es: %.2f", promedio);
	printf("\nEl porcentaje de aprobados es: %.2f", porcentaje);
}	
