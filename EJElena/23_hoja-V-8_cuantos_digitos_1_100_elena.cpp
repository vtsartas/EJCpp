#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 23 (hoja V, 8) - Pedir un número del 1 al 100 y decir cuántos dígitos tiene (versión Elena)

int main(){
    int num,temporal,cifras,divisor; // Definimos las variables a utilizar

    // Pedimos por pantalla el número a verificar
    cout<<"Introduce un número del 1 al 100: ";
    cin>>num;
    cifras=0;
	divisor=10;
	temporal=num;
    if (num>0 && num<101){
        do {
            temporal=(num/divisor)-((num%divisor)/divisor); // Para truncar restamos la parte decimal al número
			cifras=cifras+1;
			divisor=divisor*10;
        } while (temporal>0);
        cout<<"El número "<<num<<" tiene "<<cifras<<" dígitos";
    }

    else {
        cout<<"ERROR";
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
