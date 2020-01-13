#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 32 - Hoja VII (3) - Calcular importe según descuento que dependerá de las unidades

int main(){

    // Definimos la variable a utilizar
    int descunid,unidades;
    double descuento1,descuento2,precio,importe;
	char otrocalculo='s';

    cout<<"Introduce el precio de venta habitual: ";
	cin>>precio;
	cout<<"Indica el descuento inicial: ";
	cin>>descuento1;
	cout<<"Introduce a partir de cuántas unidades habrá un descuento superior: ";
	cin>>descunid;
	cout<<"Indica el descuento a aplicar si se compran más de "<<descunid-1<<" unidades: ";
	cin>>descuento2;

	while (otrocalculo=='s') {

        cout<<"Unidades vendidas: ";
		cin>>unidades;

		// calculamos el importe
		if (unidades<descunid) {
			importe=unidades*(precio*((100-descuento1)/100));
			cout<<"La compra tendrá un "<<descuento1<<"% de descuento.";
		}
		else {
			importe=unidades*(precio*((100-descuento2)/100));
			cout<<"La compra tendrá un "<<descuento2<<"% de descuento.";
		}

		cout<<"\nImporte= "<<importe<<".";

		cout<<"\n¿Quieres ver el importe de una nueva compra del mismo artículo (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
