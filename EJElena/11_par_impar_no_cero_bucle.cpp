#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Indicar si un n�mero es par o impar. Si es cero volver a pedir otro n�mero hasta que no lo sea

int main(){
    // Definimos la variable entera 'num'
    int num;
    // Leemos por pantalla un primer valor para 'num'
    cout <<"Introduce el n�mero del que quieras saber si es par o impar: ";
    cin >>num;
    // Si el n�mero es cero pedimos otro mientras no sea distinto
    while (num==0){
            cout <<"El n�mero indicado es cero. Indica otro n�mero para saber si es par ni impar: ";
            cin >>num;
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
