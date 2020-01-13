// 1. Programa que lea un número entero por teclado y calcule si es par o impar.

#include <iostream>
// #include <string>
#include <stdlib.h>

#include <clocale>
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio1.h"

using namespace std; // necesario para entrada/salida

void ejercicio1(){

    char otro1;
    string mensaje="";
    int numero;

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows
    
    do{
        cout<<"Introduce un número para comprobar si es par o impar: ";
        cin>>numero;
        if (parimpar(numero)){
            mensaje="par";
        }
        else{
            mensaje="impar";
        }
        cout<<"El número "<<numero<<" es "<<mensaje<<".\n";

        // preguntamos si se quiere comprobar si otro número es par o impar
        cout<<"¿Quieres ver si otro número es par o impar (s/n)? ";
        cin>>otro1;

        } while (otro1=='s');

}

bool parimpar(int n){
    return (n%2==0)?true:false;
}