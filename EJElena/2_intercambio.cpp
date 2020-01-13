#include <iostream>
#include <conio.h>
using namespace std;
// Ejercicio 2 - Intercambiar el valor de dos variables dadas
int main(){
    // Definimos las variables enteras 'a' y 'b', y la que va a hacer de comodín ('c')
    int a,b,c;
    // Leemos por pantalla el valor de 'a' y 'b'
    cout <<"Introduce el valor de 'a': ";
    cin >>a;
    cout <<"Introduce el valor de 'b': ";
    cin >>b;
    cout <<"El valor original de 'a' es " <<a<< " y el de 'b' es "<<b<<".\n";
    // Intercambiamos usando 'c' y mostramos el resultado
    c=a;
    a=b;
    b=c;
    cout <<"El valor final de 'a' es " <<a<< " y el de 'b' es "<<b<<".\n";

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"Pulse una tecla para salir";
    getch();
    return 0;
}
