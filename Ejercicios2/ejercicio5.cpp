/* 5. Programa que lea una variable entera mes y compruebe si el valor corresponde
    a un mes de 30 días, de 31 o de 28. Supondremos que febrero tiene 28 días.
    Se mostrará además el nombre del mes. Se debe comprobar que el valor
    introducido esté comprendido entre 1 y 12. */

#include <iostream>
//#include <string>
#include <stdlib.h> // necesaria para la localización
#include <clocale> // necesaria para la localización en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio5.h"
#include "utils.h"

using namespace std; // necesario para entrada/salida

void ejercicio5(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    int mes,anyo;
    string mensaje="";
    char otro5;

    do{
        do {
            cout<<"Introduce, en número, un mes para saber cuántos días tiene: "; cin>>mes;
            if (mes<1||mes>12){
                cout<<"ERROR: el mes introducido no es válido.\n";
            }
        }while(mes<1||mes>12);

        cout<<"Introduce también el año por si fuese bisiesto: "; cin>>anyo;

        if (bisiesto(anyo)){
            mensaje="El mes de "+mestxt(mes)+" de "+to_string(anyo)+" tiene "+to_string(diasmesb(mes))+" días.";
        }
        else{
            mensaje="El mes de "+mestxt(mes)+" de "+to_string(anyo)+" tiene "+to_string(diasmes(mes))+" días.";
        }

        cout<<mensaje;

        cout<<"\n¿Quieres comprobar otro mes/año (s/n)? ";
        cin>>otro5;

        } while (otro5=='s');

} // fin ejercicio5(){}