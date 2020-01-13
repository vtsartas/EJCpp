#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Indicar si un número es par o impar. Si es cero volver a pedir otro número hasta que no lo sea

int main(){
    // Definimos la variable entera 'num'
    int num;
    // Leemos por pantalla un primer valor para 'num'
    cout <<"Introduce el número del que quieras saber si es par o impar: ";
    cin >>num;
    // Si el número es cero pedimos otro mientras no sea distinto
    while (num==0){
            cout <<"El número indicado es cero. Indica otro número para saber si es par ni impar: ";
            cin >>num;
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
