#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 26 - Hoja VI (3) - Verificar si el año dado es bisiesto según las indicaciones dadas

int main(){
    // Definimos la variable a utilizar
    int year;

	cout<<"Introduce el año del que deseas comprobar si es o no bisiesto: ";
	cin>>year;

	// Comprobamos según las indicaciones dadas si es o no bisiesto
	if ((year%4==0 && year%100!=0) || (year%100==0 && year%400==0)) {
		cout<<"El año "<<year<<" es bisiesto.";
	}
	else {
		cout<<"El año "<<year<<" NO es bisiesto.";
	}

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
