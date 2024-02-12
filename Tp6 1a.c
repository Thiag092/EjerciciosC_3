#include<stdio.h>
#include<string.h>
void ingresarDatosCadenas(); 
void concatenarCadenas(char[], char[]);
int calcularLongitud(char);
void inprimirCadenas();
void limpiarCadenasXd();
char nombre [12];
char apellido [12];
char nombreYapellido [30];
char continuar;
int main (){
	ingresarDatosCadenas();
	while (continuar == 's' || continuar == 'S'){
		concatenarCadenas(nombreYapellido, apellido);
		concatenarCadenas(nombreYapellido, ",");
		concatenarCadenas(nombreYapellido, nombre);
		inprimirCadenas();
		limpiarCadenasXd();
		ingresarDatosCadenas(); 
	}
	inprimirCadenas();
	return 0;
}
void ingresarDatosCadenas(){
	printf ("\n desea ingresar datos? [S-SI N-NO]: ");
	fflush(stdin);
	scanf ("%c", &continuar);
	if (continuar == 's' || continuar == 'S'){
		printf ("\n ingrese el nombre: ");
		fflush(stdin);
		scanf ("%s", nombre);
		printf ("\n ingrese el apellido: ");
		fflush(stdin);
		scanf ("%s", apellido);
	}
}
void concatenarCadenas(char pNombreYapellido[], char pCadena[]){
	strcat (pNombreYapellido, pCadena);
}
void inprimirCadenas(){
	printf ("\n el nombre y apellido es: %s, \n cantidad de caracteres %i", nombreYapellido, strlen (nombreYapellido));

} 
void limpiarCadenasXd(){
	strcpy (nombreYapellido, "");
}
