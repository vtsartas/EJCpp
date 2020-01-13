// 2. Programa que lea un carácter por teclado y compruebe si es una letra mayúscula

#include <iostream>
#include <string>
#include <stdlib.h>
#include <clocale>
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio2.h"

using namespace std; // necesario para entrada/salida

void ejercicio2(){

    char otro2,letra;
    string letrastr="";
    string mensaje="";

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows
    
    do{
        cout<<"Introduce una letra para ver si es mayúscula o minúscula: ";
        cin>>letra;
        letrastr.append(1,letra);
        if (isupper(letra)){
            mensaje="mayúsculas";
        }
        else{
            mensaje="minúsculas";
        }
        cout<<"El carácter introducido está en "<<mensaje<<".\n";

        // preguntamos si se quiere comprobar si otro número es par o impar
        cout<<"¿Quieres ver si otro carácter está en mayúsculas o minúsculas (s/n)? ";
        cin>>otro2;

        } while (otro2=='s');

}