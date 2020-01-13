#include <iostream>
#include <conio.h>
using namespace std;

// Ejercicio 5 - Si 'a' es negativo hacer el producto de a*b*c, si no hacer la suma

int main(){
    // Definimos las variables enteras 'a', 'b' y 'c' y las que contendrán el producto y la suma
    int a,b,c,producto,suma;
    // Leemos por pantalla el valor de 'a', 'b' y 'c'
    cout <<"Introduce el valor de 'a': ";
    cin >>a;
    cout <<"Introduce el valor de 'b': ";
    cin >>b;
    cout <<"Introduce el valor de 'c': ";
    cin >>c;
    // Comparamos y decimos cuál es mayor de las tres
    if (a<0) {
        producto=a*b*c;
        cout <<"El valor de 'a'("<<a<<") es negativo. El producto de "<<a<<"*"<<b<<"*"<<c<<" es "<<producto<<".";
        }
    else {
        suma=a+b+c;
        cout <<"El valor de 'a'("<<a<<") es cero o positivo. La suma "<<a<<"+"<<b<<"+"<<c<<" es "<<suma<<".";
        }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
