#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
#include <math.h> // necesaria para truncamiento de enteros
using namespace std;

// Ejercicio 34 - Hoja VII (5) - Indicar si un n�mero de 3 cifras dado es capic�a

int main(){

    // Definimos la variable a utilizar
    int num,unidades,centenas;
	char otrocalculo='s';

	while (otrocalculo=='s') {

        cout<<"Introduce el n�mero de 3 cifras del que quieres saber si es o no capic�a: ";
		cin>>num;

		// el n�mero tentr� 3 cifras si es mayor que 99 y menor que 1000
		if (num>99 && num<1000) {
			// calculamos las unidades y las centenas, no hace falta mirar las decenas
			unidades=num%10;
			centenas=trunc(num/100);

			// si unidades y centenas son iguales el n�mero de 3 cifras ser� capic�a
			if (unidades==centenas) {
				cout<<"El n�mero "<<num<<" es capic�a";
			}
			else {
				cout<<"El n�mero "<<num<<" no es capic�a";
			}
		}
		else {
			cout<<"ERROR: el n�mero indicado es incorrecto.";
		}

		cout<<"\n�Deseas comprobar si otro n�mero es capic�a (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
