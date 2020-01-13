#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 9 - Decir si un número entero es par, impar o cero

int main(){
    // Definimos la variable entera 'num'
    int num;
    // Leemos por pantalla su valor
    cout <<"Introduce el número del que quieras saber si es par o impar: ";
    cin >>num;
    // Si el número es cero indicamos que no es par ni impar. Si no, segumos.
    if (num==0){
            cout <<"El número indicado no es par ni impar (cero)";
    }
    // Si el resto de num/2 es cero el número es par, si no es impar
    else if (num%2 == 0){
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
