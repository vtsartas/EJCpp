#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 39 - Hoja VIII (5) - Mostrar los n�meros primos del 1 al 100

int main(){

    // Definimos la variable a utilizar
    int n1,n2;
    bool primo;

	    // Montamos un bucle que recorra los primeros 100 n�meros
	for (n1=1;n1<101;n1++) {
		primo=true; // De entrada, consideramos que el n�mero es primo salvo que en el siguiente bucle detectemos lo contrario

		// "dopamos" el algoritmo salt�ndonos los pares mayores a 2
        if (n1>2 && n1<99 && n1%2==0){
            n1++;
        }

		// Hacemos un bucle para dividir el n�mero entre todos los menores o iguales que �l
		for (n2=1;n2<=n1;n2++){
            // Si el n�mero es divisible entre alg�n n�mero de los comprendidos entre 1 y si mismo NO ES PRIMO
            if ((n2>1) && (n2<n1) && (n1%n2==0)) {
                // Cambiamos el valor a 'no primo'
                primo=false;
            }
        } // Terminamos de recorrer los posibles divisores

        // Comprobamos si tras el bucle el n�mero es o no primo. Si lo es, lo mostramos por pantalla
        if (primo==true) {
            cout<<n1<<" ";
		}
	} // Terminamos de recorrer los 100 primeros n�meros

    // Esperamos que se pulse una tecla para cerrar el programa
    cout<<"\nPulse una tecla para salir\n";
    getch();
    return 0;
}
