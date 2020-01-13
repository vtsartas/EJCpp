#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 26 - Hoja VI (3) - Verificar si el a�o dado es bisiesto seg�n las indicaciones dadas

int main(){
    // Definimos la variable a utilizar
    int year;

	cout<<"Introduce el a�o del que deseas comprobar si es o no bisiesto: ";
	cin>>year;

	// Comprobamos seg�n las indicaciones dadas si es o no bisiesto
	if ((year%4==0 && year%100!=0) || (year%100==0 && year%400==0)) {
		cout<<"El a�o "<<year<<" es bisiesto.";
	}
	else {
		cout<<"El a�o "<<year<<" NO es bisiesto.";
	}

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
