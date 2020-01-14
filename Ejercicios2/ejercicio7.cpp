/* 7. Programa que lea números enteros por teclado y para cada número introducido indique si es
positivo o negativo y si es par o impar. Se deben realizar tres versiones del programa:
a) En la primera versión se utilizará un bucle while.
La lectura de números finalizará cuando se introduzca un cero.
b) En la segunda versión se utilizará un bucle do .. while.
La lectura de números en esta versión también finaliza cuando se introduzca un cero.
c) En la tercera versión también se utilizará un bucle do .. while pero en
este caso la lectura de números finaliza cuando se responda ‘N’ ó ‘n’
a la pregunta “Desea introducir más números? (S/N):”
*/

#include <iostream>
//#include <string>
#include <stdlib.h> // necesaria para la localización
#include <clocale> // necesaria para la localización en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio7.h"

using namespace std; // necesario para entrada/salida

void ejercicio7(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    int numero,version;
    char otro6;

    do{
        cout<<"Se comprobará si un número es positivo/negativo y par/impar.\n";
        cout<<"Elije la versión que quieres utilizar: \n";
        cout<<"1. Usando 'while'. Introduce '0' para salir.\n";
        cout<<"2. Usando 'do...while'. Introduce '0' para salir.\n";
        cout<<"3. Usando 'do...while'. Introduce 'n' o 'N' para salir.\n";
        do{
            cin>>version;
            if (version<1||version>3){
                cout<<"ERROR: el ejercicio introducido no es válido. Vuelve a indicarlo: "
            }
        }while(version<1||version>3);

        switch version{
            case: 1
        }
        do{
            cout<<"Introduce el segundo número: "; cin>>num2;
            if (num2==num1){
                cout<<"ERROR: el segundo número no puede ser igual al primero.\n";
            }
        }while(num1==num2); // fin do...while introducción segundo número


        cout<<"\n¿Quieres repetir el ejercicio con otros números (s/n)? ";
        cin>>otro6;

    } while (otro6=='s');

} // fin ejercicio6(){}