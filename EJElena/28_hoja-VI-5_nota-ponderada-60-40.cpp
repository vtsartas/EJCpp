#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre

using namespace std;

// Ejercicio 28 - Hoja VI (5) - Indicar la nota ponderada seg�n el criterio dado (parte te�rica 60%, pr�ctica 40%) de cada uno de un n�mero determinado de alumnos

int main(){
    // Definimos la variable a utilizar
	int numalumnos,contador;
	float teorica,practica,nota;

	cout<<"Introduce el n�mero total de alumnos: ";
	cin>>numalumnos;
	contador=1;

	while (contador<=numalumnos) {
		cout<<"Introduce la nota de la parte te�rica del alumno n�mero "<<contador<<" (de "<<numalumnos<<").";
		cin>>teorica;
		cout<<"Introduce la nota de la parte pr�ctica del alumno n�mero "<<contador<<" (de "<<numalumnos<<").";
		cin>>practica;
		nota=(teorica*60/100)+(practica*40/100);
		cout<<"La nota final del alumno n�mero "<<contador<<" es "<<nota<<".\n";
		contador=contador+1;
	}
	cout<<"Ya se han calculado todas las notas.";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
