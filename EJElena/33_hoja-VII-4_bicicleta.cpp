#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
#include <math.h> // necesaria para truncamiento de enteros
using namespace std;

// Ejercicio 33 - Hoja VII (4) - Calcular el tiempo que tardará una bicicleta en realizar un trayecto suponiendo que su velocidad sea constante

int main(){

    // Definimos la variable a utilizar
    int horas,minutos,segundos;
    double velocidad,espacio,tiempo;
	char otrocalculo='s';

	while (otrocalculo=='s') {

        cout<<"Indica (en kph) la velocidad media de la bicicleta: ";
		cin>>velocidad;
		cout<<"Indica (en kilómetros) la distancia entre las dos ciudades: ";
		cin>>espacio;

		// calculamos lo que tarda
		tiempo=espacio/velocidad;

		// calculamos las horas/minutos/segundos que representa ese tiempo
		horas=trunc(tiempo);
		minutos=trunc((tiempo-trunc(tiempo))*60);
		segundos=trunc((((tiempo-trunc(tiempo))*60)-trunc((tiempo-trunc(tiempo))*60))*60);

		cout<<"La bicicleta tardará "<<horas<<" horas, "<<minutos<<" minutos y "<<segundos<<" segundos en realizar el trayecto de "<<espacio<<"km a "<<velocidad<<"kph.";


		cout<<"\n¿Quieres calcular otro trayecto (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}



