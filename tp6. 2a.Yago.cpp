#include <stdio.h>
#define ALUMNOS 10
typedef float tvAlumnos[ALUMNOS];

void inicializarVariables();
void ingresarDatos();
void calcularPromediosNotas(tvAlumnos);
void calcularAprobados(tvAlumnos);
void calcularPorcentajeAprobados();
void imprimirResultados(tvAlumnos);

float promedioNotas, acumuladorNotas, promedioAprobados, porcentajeAp;
int aprobados,i;
tvAlumnos notasAlumnos;

int main(){
	
	inicializarVariables();
 	ingresarDatos();
	calcularPromediosNotas(notasAlumnos);
	calcularAprobados(notasAlumnos);
	calcularPorcentajeAprobados();
	imprimirResultados(notasAlumnos);
	
	return 0;
}
void inicializarVariables(){
	 acumuladorNotas=0;
	 promedioAprobados=0;
	 porcentajeAp=0;
}
void ingresarDatos(){
	
	for (i=0;i<ALUMNOS;i++){
		printf ("Ingrese nota del alumnos N %d\n", i+1);
		fflush (stdin);
		scanf ("%f", &notasAlumnos[i]);
	}
}
void calcularPromediosNotas(tvAlumnos pProm){
	
	for (i=0;i<ALUMNOS; i++){
		if (pProm[i]>=6){
			acumuladorNotas= acumuladorNotas+pProm[i];
		}
	}	
}
void calcularAprobados(tvAlumnos pAprob){
	aprobados=0;
	
	for (i=0;i<ALUMNOS; i++){
		if (pAprob[i]>=6){
			aprobados=aprobados+1;
		}
	}
	promedioAprobados = (float)acumuladorNotas/aprobados;
}
void calcularPorcentajeAprobados(){
	porcentajeAp= (float)aprobados/ALUMNOS*100;
}
void imprimirResultados(tvAlumnos pNotasAlumnos){
	
	printf ("-------------------------------------------------------------------------\n");
	printf ("Las notas ingresadas son: \n");
	for (i=0;i<ALUMNOS;i++){
	printf ("\tAlumno N%d - nota %.2f\n", i+1, pNotasAlumnos[i]);
	}
	printf ("-------------------------------------------------------------------------- \n");
	printf ("el promedio de notas de los aprobados es de: %.2f\n", promedioAprobados);
	printf ("La cantidad de alumnos aprobados es de: %d\n", aprobados);
	printf ("El por centaje de aprobados es de:%% %.2f\n", porcentajeAp);
}
