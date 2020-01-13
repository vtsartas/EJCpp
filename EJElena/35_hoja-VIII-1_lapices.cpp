#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 35 - Hoja VIII (1) - Coste cantidad de l�pices seg�n tarifa dada por pantalla

int main(){

    // Definimos la variable a utilizar
    int unidades,unidsup;
    float coste,costesup;
	char otrocalculo='s';

    cout<<"Introduce el coste inicial de los l�pices:\n";
	cin>>coste;
	cout<<"Indica a partir de qu� cantidad de de l�pices se reduce el coste:\n";
	cin>>unidsup;
	cout<<"Indica el coste reducido a partir de "<<unidsup<<" l�pices:\n";
	cin>>costesup;

	while (otrocalculo=='s') {

        cout<<"A partir de "<<unidsup<<" l�pices, el coste es "<<costesup<<" euros.\nSi es menor es "<<coste<<" euros.\n";

        cout<<"Introduce el n�mero de de l�pices: ";
		cin>>unidades;

		// Si la compra es de mayor o menor de la cantidad indicada tendr� un precio u otro
		if (unidades>=unidsup){
			cout<<"El coste de "<<unidades<<" l�pices es de "<<costesup<<" euros.";
		}
		else {
			cout<<"El coste de "<<unidades<<" l�pices es de "<<coste<<" euros.";
		}

		cout<<"\n�Deseas ver el coste de otra venta (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
