#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 31 - Hoja VII (2) - Calcular precio de venta de una pieza para obtener un porcentaje dado de ganancia

int main(){

    // Definimos la variable a utilizar
    float precio,porcganancia,importe;
	char otrocalculo='s';

	while (otrocalculo=='s') {

        cout<<"Introduce el precio de coste de la pieza: ";
		cin>>precio;
		cout<<"Introduce el porcentaje de ganancia que deseas obtener: ";
		cin>>porcganancia;

		// calculamos el importe
		importe=precio*((100+porcganancia)/100);
		cout<<"Para obtener un "<<porcganancia<<" en la pieza (coste "<<precio<<") deberás venderla a "<<importe<<".";

		cout<<"\n¿Quieres introducir los datos de una nueva pieza (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
