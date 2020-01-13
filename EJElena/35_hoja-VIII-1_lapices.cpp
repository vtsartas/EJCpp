#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 35 - Hoja VIII (1) - Coste cantidad de lápices según tarifa dada por pantalla

int main(){

    // Definimos la variable a utilizar
    int unidades,unidsup;
    float coste,costesup;
	char otrocalculo='s';

    cout<<"Introduce el coste inicial de los lápices:\n";
	cin>>coste;
	cout<<"Indica a partir de qué cantidad de de lápices se reduce el coste:\n";
	cin>>unidsup;
	cout<<"Indica el coste reducido a partir de "<<unidsup<<" lápices:\n";
	cin>>costesup;

	while (otrocalculo=='s') {

        cout<<"A partir de "<<unidsup<<" lápices, el coste es "<<costesup<<" euros.\nSi es menor es "<<coste<<" euros.\n";

        cout<<"Introduce el número de de lápices: ";
		cin>>unidades;

		// Si la compra es de mayor o menor de la cantidad indicada tendrá un precio u otro
		if (unidades>=unidsup){
			cout<<"El coste de "<<unidades<<" lápices es de "<<costesup<<" euros.";
		}
		else {
			cout<<"El coste de "<<unidades<<" lápices es de "<<coste<<" euros.";
		}

		cout<<"\n¿Deseas ver el coste de otra venta (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
