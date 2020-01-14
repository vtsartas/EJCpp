// 3. Programa que lea por teclado tres números enteros y calcule el mayor de los tres.

#include <iostream>
#include <string>
#include <stdlib.h>
#include <clocale>
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio3.h"

using namespace std; // necesario para entrada/salida

void ejercicio3(){

    int a,b,c;
    string mensaje="";
    char otro3;

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows
    
    do{
        cout<<"Introduce el primer número: ";cin>>a;
        cout<<"Introduce el segundo número: ";cin>>b;
        cout<<"Introduce el número número: ";cin>>c;

        if ((a>b)&&(a>c)){
            mensaje="El primer número ("+to_string(a)+") es mayor que el segundo ("+to_string(b)+") y que el tercero ("+to_string(c)+").\n";
        }
        else if (b>c){
            mensaje="El segundo número ("+to_string(b)+") es mayor que el primero ("+to_string(a)+") y que el tercero ("+to_string(c)+").\n";
        }
        else{
            mensaje="El tercer número ("+to_string(c)+") es mayor que el primero ("+to_string(a)+") y que el segundo ("+to_string(b)+").\n";
        }

        cout<<mensaje;

        cout<<"¿Quieres ver cuál es el mayor de otros tres números (s/n)? ";
        cin>>otro3;

        } while (otro3=='s');

}