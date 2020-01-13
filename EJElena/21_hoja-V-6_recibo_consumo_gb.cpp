#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 21 (hoja V, 6) - Calcular recibo de operador según GB consumidos

int main(){
    float consumo, coste; // Definimos las variables a utilizar

    // Pedimos por pantalla el consumo en GB realizado
    cout<<"Introduce el consumo total del mes del cliente en GB: ";
    cin>>consumo;

    // Si el consumo es 4 GB o menos el importe será 45€
    if (consumo<=4){
        cout<<"El recibo es de 45 euros.";
    }
    else if (consumo<=8){
        cout<<"El recibo es de 85 euros.";
    }
    else {
        coste=85+((consumo-8)*4.5);
        cout<<"El recibo es de "<<coste<<" euros.";
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
