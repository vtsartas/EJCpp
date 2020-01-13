#include <iostream>
#include <conio.h>
using namespace std;
// Ejercicio 1 - Operaciones básicas usando dos variables
int main(){
    // Definimos las variables enteras a y b, y las que van a contener las operaciones
    int a,b,suma,resta,multi,divi;
    // Leemos por pantalla el valor de a y b;
    cout <<"Introduce el valor de 'a': ";
    cin >>a;
    cout <<"Introduce el valor de 'b': ";
    cin >>b;
    // SUMA
    suma=a+b;
    cout <<"La suma de a(" <<a<<") y b("<<b<<") es igual a "<<suma<<".\n";
    // RESTA
    resta=a-b;
    cout <<"El valor de a(" <<a<<") menos el de b("<<b<<") es igual a "<<resta<<".\n";
    // MULTIPLICACIÓN
    multi=a*b;
    cout <<"El producto de a(" <<a<<") por b("<<b<<") es igual a "<<multi<<".\n";
    // DIVISIÓN (con comprobación de división por cero)
    if (b==0){
        cout<<"ERROR: el valor de 'b' es cero y no es posible dividir.\n";
    }
    else{
        divi=a/b;
        cout <<"El valor de a(" <<a<<") entre b("<<b<<") es igual a "<<divi<<".\n\n";
    }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"Pulse una tecla para salir";
    getch();
    return 0;
}
