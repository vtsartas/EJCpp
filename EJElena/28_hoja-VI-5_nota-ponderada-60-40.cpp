#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre

using namespace std;

// Ejercicio 28 - Hoja VI (5) - Indicar la nota ponderada según el criterio dado (parte teórica 60%, práctica 40%) de cada uno de un número determinado de alumnos

int main(){
    // Definimos la variable a utilizar
	int numalumnos,contador;
	float teorica,practica,nota;

	cout<<"Introduce el número total de alumnos: ";
	cin>>numalumnos;
	contador=1;

	while (contador<=numalumnos) {
		cout<<"Introduce la nota de la parte teórica del alumno número "<<contador<<" (de "<<numalumnos<<").";
		cin>>teorica;
		cout<<"Introduce la nota de la parte práctica del alumno número "<<contador<<" (de "<<numalumnos<<").";
		cin>>practica;
		nota=(teorica*60/100)+(practica*40/100);
		cout<<"La nota final del alumno número "<<contador<<" es "<<nota<<".\n";
		contador=contador+1;
	}
	cout<<"Ya se han calculado todas las notas.";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
