#include <iostream>
#include <conio.h>
using namespace std;
// Ejercicio 3 - Determinar cuál de los dos valores dados es mayor o si son iguales
int main(){
    // Definimos las variables enteras 'a' y 'b'
    int a,b;
    // Leemos por pantalla el valor de 'a' y 'b'
    cout <<"Introduce el valor de 'a': ";
    cin >>a;
    cout <<"Introduce el valor de 'b': ";
    cin >>b;
    // Comparamos y decimos cuál es mayor o si son iguales
    if (a>b) {
        cout <<"El valor de 'a'("<<a<<") es mayor que el de 'b'("<<b<<").";
        }
    else if (b>a){
        cout <<"El valor de 'b'("<<b<<") es mayor que el de 'a'("<<a<<").";
        }
    else {
        cout <<"El valor de 'a'("<<a<<") y 'b'("<<b<<") es igual.\n";
        }


    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
