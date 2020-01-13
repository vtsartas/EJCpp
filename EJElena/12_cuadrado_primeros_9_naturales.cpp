#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 12 - Mostrar el cuadrado de los primeros 9 n�meros naturales

int main(){
    int num; // Definimos la variable entera 'num'
    num=1; // inicializamos 'num' con el primer n�mero natural

    // Mientras 'num' sea menor de 10 mostraremos su cuadrado y le a�adiremos 1 para el siguiente c�lculo
    while (num<10){
            cout <<"El cuadrado de "<<num<<" es "<<num*num<<".\n";
            num=num+1;
    }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
