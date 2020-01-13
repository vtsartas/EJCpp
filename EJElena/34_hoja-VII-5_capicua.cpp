#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
#include <math.h> // necesaria para truncamiento de enteros
using namespace std;

// Ejercicio 34 - Hoja VII (5) - Indicar si un número de 3 cifras dado es capicúa

int main(){

    // Definimos la variable a utilizar
    int num,unidades,centenas;
	char otrocalculo='s';

	while (otrocalculo=='s') {

        cout<<"Introduce el número de 3 cifras del que quieres saber si es o no capicúa: ";
		cin>>num;

		// el número tentrá 3 cifras si es mayor que 99 y menor que 1000
		if (num>99 && num<1000) {
			// calculamos las unidades y las centenas, no hace falta mirar las decenas
			unidades=num%10;
			centenas=trunc(num/100);

			// si unidades y centenas son iguales el número de 3 cifras será capicúa
			if (unidades==centenas) {
				cout<<"El número "<<num<<" es capicúa";
			}
			else {
				cout<<"El número "<<num<<" no es capicúa";
			}
		}
		else {
			cout<<"ERROR: el número indicado es incorrecto.";
		}

		cout<<"\n¿Deseas comprobar si otro número es capicúa (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
