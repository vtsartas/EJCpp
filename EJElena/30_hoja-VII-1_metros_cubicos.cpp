#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 30 - Hoja VII (1) - Indicar el coste del agua de una piscina

int main(){
    // Definimos la variable a utilizar

    float ancho,largo,profundidad,volumen,precio,importe;
	char otrocalculo='s';

	cout<<"Introduce el precio por metro cúbico: ";
	cin>>precio;

	while (otrocalculo=='s') {
		// Pedimos las dimensiones
		cout<<"Introduce (en metros) el ancho de la piscina: ";
		cin>>ancho;
		cout<<"Introduce (en metros) el largo de la piscina: ";
		cin>>largo;
		cout<<"Introduce (en metros) la profundidad del agua en la piscina: ";
		cin>>profundidad;
		// calculamos el volumen de agua
		volumen=ancho*largo*profundidad;
		cout<<"\nLa piscina tiene "<<volumen<<" metros cúbicos de agua.";
		// calculamos e indicamos el importe a pagar
		importe=precio*volumen;
		cout<<"\nEl importe para esta piscina es de "<<importe<<".";

		cout<<"\n¿Quieres introducir los datos de una nueva piscina (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
