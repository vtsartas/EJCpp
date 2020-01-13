#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 23 (hoja V, 8) - Pedir un n�mero del 1 al 100 y decir cu�ntos d�gitos tiene (versi�n Elena)

int main(){
    int num,temporal,cifras,divisor; // Definimos las variables a utilizar

    // Pedimos por pantalla el n�mero a verificar
    cout<<"Introduce un n�mero del 1 al 100: ";
    cin>>num;
    cifras=0;
	divisor=10;
	temporal=num;
    if (num>0 && num<101){
        do {
            temporal=(num/divisor)-((num%divisor)/divisor); // Para truncar restamos la parte decimal al n�mero
			cifras=cifras+1;
			divisor=divisor*10;
        } while (temporal>0);
        cout<<"El n�mero "<<num<<" tiene "<<cifras<<" d�gitos";
    }

    else {
        cout<<"ERROR";
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
