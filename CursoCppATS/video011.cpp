// 011 - condicionales

#include <iostream>

#include <stdlib.h> // COMPROBAR si era lo necesario para que funcionase en 'spanish'
#include <clocale> // necesaria para la localización y codificación en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

using namespace std;

int main(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    int numero,dato=5;
    cout<<"Introduce un valor que se comparará a "<<dato<<": "; cin>>numero;
    cout<<"El valor dado "<<((numero==dato)?"es igual a ":"no es igual a ")<<dato<<".";

    return 0;

} // fin del main