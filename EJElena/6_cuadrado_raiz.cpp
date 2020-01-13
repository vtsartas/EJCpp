#include <iostream>
#include <conio.h>
#include <cmath> // Se incluye para el producto y la raiz
using namespace std;

// Ejercicio 6 - Si 'a' es negativo o cero mostrar un error, si no mostrar su cuadrado y su raiz

int main(){
    // Definimos la variable real 'a' y 'cuadrado' y 'raiz' para las operaciones
    float a,cuadrado,raiz;
    // Leemos por pantalla el valor de 'a'
    cout <<"Introduce el valor de 'a': ";
    cin >>a;

    // Verificamos si 'a' es cero o negativo y realizamos lo que corresponda en cada caso
    if (a<=0) {
        cout <<"Error. El valor de 'a'("<<a<<") es cero o negativo.";
        }
    else {
        cuadrado=pow(a,2);
        raiz=sqrt(a);
        cout <<"El valor de 'a'("<<a<<") es positivo. Su cuadrado es "<<cuadrado<<" y su raiz cuadrada "<<raiz<<".";
        }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
