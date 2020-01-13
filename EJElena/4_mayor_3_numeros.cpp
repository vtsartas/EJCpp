#include <iostream>
#include <conio.h>
using namespace std;
// Ejercicio 4 - Determinar cuál de los tres valores dados es mayor
int main(){
    // Definimos las variables enteras 'a', 'b' y 'c'
    int a,b,c;
    // Leemos por pantalla el valor de 'a', 'b' y 'c'
    cout <<"Introduce el valor de 'a': ";
    cin >>a;
    cout <<"Introduce el valor de 'b': ";
    cin >>b;
    cout <<"Introduce el valor de 'c': ";
    cin >>c;
    // Comparamos y decimos cuál es mayor de las tres
    if (a>b && a>c) {
        cout <<"El mayor valor es el de 'a'("<<a<<").";
        }
    else if (b>c){
        cout <<"El mayor valor es el de 'b'("<<b<<").";
        }
    else {
        cout <<"El mayor valor es el de 'c'("<<c<<").";
        }


    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
