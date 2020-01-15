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
#include <string>
#include <stdlib.h> // necesaria para la localización
#include <clocale> // necesaria para la localización en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio7.h"
#include "utils.h"

using namespace std; // necesario para entrada/salida

void ejercicio7(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    int version;
    char otro7;

    do{
        cout<<"Se comprobará si un número es positivo/negativo y par/impar.\n";
        cout<<"Elije la versión que quieres utilizar: \n";
        cout<<"1. Usando 'while'. Introduce '0' para salir.\n";
        cout<<"2. Usando 'do...while'. Introduce '0' para salir.\n";
        cout<<"3. Usando 'do...while'. Introduce 'n' o 'N' para salir.\n";
        do{
            cin>>version;
            if (version<1||version>3){
                cout<<"ERROR: el ejercicio introducido no es válido. Vuelve a indicarlo: ";
            }
        }while(version<1||version>3);

        cout<<"\n";

        switch (version){
            case 1:
                ejercicio7a();
                break;
            case 2:
                ejercicio7b();
                break;
            case 3:
                ejercicio7c();
                break;
            default:
                break;
        }


        cout<<"\n¿Quieres realizar de nuevo el ejercicio (s/n)? ";
        cin>>otro7;

    } while (otro7=='s');

} // fin ejercicio7(){}

void ejercicio7a(){
    
    int numero;

    cout<<"Ejercicio 7A (usa do...while y '0' para salir).\n";
    cout<<"Introduce un número para saber si es +/- y par/impar (o '0' para terminar): "; cin>>numero;
    while(numero!=0){
        
        cout<<"El número "<<numero<<" es "<<(parimpar(numero)?"par":"impar")<<" y "<<(posinega(numero)?"positivo":"negativo")<<".\n";
        
        cout<<"Introduce otro número para saber si es +/- y par/impar ('0' para salir): "; cin>>numero;

    } // fin del while

} // fin de ejercicio7a()

void ejercicio7b(){
    
    int numero;

    cout<<"Ejercicio 7B (usa do...while y '0' para salir).\n";
    do{
        cout<<"Introduce un número para saber si es +/- y par/impar (o '0' para terminar): "; cin>>numero;
        if (numero!=0){
            cout<<"El número "<<numero<<" es "<<(parimpar(numero)?"par":"impar")<<" y "<<(posinega(numero)?"positivo":"negativo")<<".\n";
        } // fin del if
    }while(numero!=0); // fin do...while introducción segundo número

} // fin de ejercicio7b()

void ejercicio7c(){
    
    string lee="";
    int numero;
    boolean salir=false;

    cout<<"Ejercicio 7C (usa do...while y 'n' o 'N' para salir).\n";

    do{
        
        cout<<"Introduce un número para saber si es +/- y par/impar ('n' o 'N' para salir): ";cin>>lee;

        if ((lee.compare("n")==0)||(lee.compare("N"))==0){
            cout<<"Salimos";
            salir=true;
        }else if (stoi(lee)==0){
            cout<<"Has introducido cero.\n";
        }else{
            numero=stoi(lee);
            cout<<"El número "<<numero<<" es "<<(parimpar(numero)?"par":"impar")<<" y "<<(posinega(numero)?"positivo":"negativo")<<".\n";
        }

    }while(!salir); // fin do...while introducción segundo número

} // fin de ejercicio7c()