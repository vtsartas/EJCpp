#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
#include <string> // Se incluye para poder usar el tipo de variable "string", de cadena de caracteres
using namespace std;

// Ejercicio 8 - Aplicar descuento del 15% si el mes actual es octubre

int main(){
    // Definimos la variable reales 'importe' y la de tipo cadena de caracteres 'mes_actual'
    float importe;
    string mes_actual;

    // Leemos por pantalla ambos valores
    cout <<"Introduce el precio del artículo: ";
    cin >>importe;
    cout <<"Introduce el mes actual en minúsculas: ";
    cin >>mes_actual;
    // Si el mes actual es "octubre" aplicamos el descuento, si no mantenemos el precio
    if (mes_actual=="octubre"){
            cout <<"El precio con descuento por ser octubre es de "<<importe*0.85<<".";
    }
    else {
          cout <<"El precio es de "<<importe<<" y no tiene descuento al no ser octubre.";
    }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
