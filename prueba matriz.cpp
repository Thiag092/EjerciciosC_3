#include <stdio.h>
#define MAXI 2
#define MAXJ 5
typedef float tm_matriz [MAXI][MAXJ];

void iniciarMatriz();
float promedioElementos(tm_matriz);
float elementoMayor(tm_matriz);
int filaMayor(tm_matriz);
int columnaMayor (tm_matriz);
void imprimirMatriz(tm_matriz);

tm_matriz matriz;

int main(){
	iniciarMatriz();
	promedioElementos(matriz);
	elementoMayor(matriz);
	filaMayor(matriz);
	columnaMayor (matriz);
	imprimirMatriz(matriz);
	
	return 0;
}
void iniciarMatriz(){
	int i, j;
	for(i=0;i<MAXI;i++){
		printf ("Fila N%d\n", i+1);
		for (j=0;j<MAXJ;j++){
			printf ("Columna N%d\t", j+1);
			scanf("%f", &matriz[i][j]);
		}
		
	}
}
float promedioElementos(tm_matriz pPromedio){
	int i, j;
	float auxAcumulador, promedio;
	for(i=0;i<MAXI;i++){
		for (j=0;j<MAXJ;j++){
			auxAcumulador = auxAcumulador + pPromedio [i][j];
		}
	}
	promedio = auxAcumulador / (MAXI * MAXJ);
	return promedio;
}
float elementoMayor(tm_matriz pMayor){
	int i, j;
	float eleMayor= pMayor [0][0];
	for(i=0;i<MAXI;i++){
		for (j=0;j<MAXJ;j++){
			if (pMayor [i][j] >eleMayor){
				eleMayor = pMayor [i][j];
			}
		}
	}	
	return eleMayor;
}
int filaMayor(tm_matriz pFilaM){
	int i, j, filaM;
	float eleMayor= pFilaM [0][0];
	for(i=0;i<MAXI;i++){
		for (j=0;j<MAXJ;j++){
			if (pFilaM [i][j] >eleMayor){
				eleMayor= pFilaM [i][j];
				filaM = i+1;
			}
		}
	}
	return filaM;
}
int columnaMayor(tm_matriz pColumnaM){
	int i, j, columnaM;
	float eleMayor= pColumnaM [0][0];
	for(i=0;i<MAXI;i++){
		for (j=0;j<MAXJ;j++){
			if (pColumnaM [i][j] >eleMayor){
				eleMayor= pColumnaM [i][j];
				columnaM = j+1;
			}
		}
	}
	return columnaM;
}
void imprimirMatriz(tm_matriz pMatriz){
	int i, j;
	printf ("Los elementos de la matriz son: \n");
	for(i=0;i<MAXI;i++){
		for (j=0;j<MAXJ;j++){
		printf ("%.2f\t", pMatriz [i][j]);
		}
		printf ("\n");
		}
	printf ("El promedio de los elementos es: %.2f\n", promedioElementos(matriz));
	printf ("El elemento de mayor valor es %.2f\n", elementoMayor(matriz));
	printf ("Se encuentra en la fila %d\n", filaMayor(matriz));
	printf ("y en la columna %d\n", columnaMayor(matriz));
}
