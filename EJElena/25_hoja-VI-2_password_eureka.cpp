#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
#include <string> // Necesario para el manejo de cadenas de caracteres
using namespace std;

// Ejercicio 25 - Hoja VI (2) - Verificar si se introduce una contrase�a de forma correcta con 3 intentos

int main(){
    // Definimos las variables a utilizar
    int intentos;
	string password;

	intentos=0;

	cout<<"Introduce la contrase�a. Tienes 3 intentos: ";

	while (intentos<3) {

		cin>>password;
		intentos=intentos+1;
		// Si acertamos salimos del Mientras evitando que salga ning�n mensaje aparte de este
		if (password=="eureka") {
			cout<<"La contrase�a que has introducido es CORRECTA";
			break; // terminamos el 'while'
        }
			// Si hemos fallado en los dos primeros intentos mostraremos este mensaje
        else if (intentos<3) {
				cout<<"La contrase�a introducida es INCORRECTA. Prueba de nuevo, te quedan "<<3-intentos<<" intentos: ";
            }
        else {
            cout<<"ERROR: Has introducido mal la contrase�a 3 veces y el programa ha terminado.";
        }
	}
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
