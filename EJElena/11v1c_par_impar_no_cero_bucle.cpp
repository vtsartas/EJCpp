#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h>  // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
#include <cstdlib>  // Se añade para poder utilizar la función rand() y obtener un número aleatorio
#include <ctime>    // Se añade para poder utilizar la función rand() y obtener un número aleatorio
using namespace std;

// Indicar si un número es par o impar. Si es cero volver a pedir otro número hasta tres veces,
// en cuyo caso avisaremos del fallo y mostraremos si un número aleatorio es par o impar

int main(){
    // Definimos la variable entera 'num'
    int num,intentos;
    // Leemos por pantalla un primer valor para 'num'
    cout <<"Introduce el número del que quieras saber si es par o impar: ";
    cin >>num;
    intentos=1; // inicializamos intentos a uno porque ya hemos leído una vez

    // Si el número es cero y no llevamos tres intentos pedimos otro
    while ((num==0) && (intentos<3)){
            cout <<"El número indicado es cero. Indica otro número para saber si es par ni impar: ";
            intentos=intentos+1;
            cin >>num;
    }

    // Del anterior bucle salimos si 'num' es distinto de cero o si se ha introducido 0 tres veces
	// por lo que conprobando si el número es cero ya sabemos si debemos averiguar si es par o no

    	// Si el número es 0 indicaremos el fallo y modificaremos el valor para que diga si un aleatorio es par o impar
	if (num==0){
		srand(time(0)); // necesario para obtener un aleatorio diferente cada vez
		num=1+rand()%1000; // usamos la función "rand()" para obtener un número entre 1 y 1000
		cout<<"ERROR: Has introducido tres veces cero.\nVamos a averiguar si un número aleatorio "<<num<<" es par o impar.\n";
	}

    // Si el resto de num/2 es cero el número es par, si no es impar
    if (num%2 == 0){
        cout <<"El número indicado es par";
        }
    else {
            cout <<"El número indicado es impar";
    }


    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
