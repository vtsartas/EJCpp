#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h>  // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
#include <cstdlib>  // Se a�ade para poder utilizar la funci�n rand() y obtener un n�mero aleatorio
#include <ctime>    // Se a�ade para poder utilizar la funci�n rand() y obtener un n�mero aleatorio
using namespace std;

// Indicar si un n�mero es par o impar. Si es cero volver a pedir otro n�mero hasta tres veces,
// en cuyo caso avisaremos del fallo y mostraremos si un n�mero aleatorio es par o impar

int main(){
    // Definimos la variable entera 'num'
    int num,intentos;
    // Leemos por pantalla un primer valor para 'num'
    cout <<"Introduce el n�mero del que quieras saber si es par o impar: ";
    cin >>num;
    intentos=1; // inicializamos intentos a uno porque ya hemos le�do una vez

    // Si el n�mero es cero y no llevamos tres intentos pedimos otro
    while ((num==0) && (intentos<3)){
            cout <<"El n�mero indicado es cero. Indica otro n�mero para saber si es par ni impar: ";
            intentos=intentos+1;
            cin >>num;
    }

    // Del anterior bucle salimos si 'num' es distinto de cero o si se ha introducido 0 tres veces
	// por lo que conprobando si el n�mero es cero ya sabemos si debemos averiguar si es par o no

    	// Si el n�mero es 0 indicaremos el fallo y modificaremos el valor para que diga si un aleatorio es par o impar
	if (num==0){
		srand(time(0)); // necesario para obtener un aleatorio diferente cada vez
		num=1+rand()%1000; // usamos la funci�n "rand()" para obtener un n�mero entre 1 y 1000
		cout<<"ERROR: Has introducido tres veces cero.\nVamos a averiguar si un n�mero aleatorio "<<num<<" es par o impar.\n";
	}

    // Si el resto de num/2 es cero el n�mero es par, si no es impar
    if (num%2 == 0){
        cout <<"El n�mero indicado es par";
        }
    else {
            cout <<"El n�mero indicado es impar";
    }


    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
