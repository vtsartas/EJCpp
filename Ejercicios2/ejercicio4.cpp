// 4. Programa que lea por teclado tres números enteros H, M, S
// correspondientes a hora, minutos y segundos respectivamente,
// y comprueba si la hora que indican es una hora válida. 

#include <iostream>
//#include <string>
#include <stdlib.h> // necesaria para la localización
#include <clocale> // necesaria para la localización en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio4.h"

using namespace std; // necesario para entrada/salida

void ejercicio4(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    int hora,mins,segs;
    string mensaje="";
    char otro4;

    do{
        cout<<"Introduce una hora para verificar si es correcta.\n";
        cout<<"Introduce la hora: ";cin>>hora;
        cout<<"Introduce los minutos: ";cin>>mins;
        cout<<"Introduce el número número: ";cin>>segs;

        mensaje="La hora introducida NO es correcta";

        if ((hora>=0)&&(hora<24)){
            if ((mins>=0)&&(mins<60)){
                if ((segs>=0)&&(segs<60)){
                    mensaje="La hora introducida es correcta";
                } // fin if segs
            } // fin if mins
        } // fin if hora

        cout<<mensaje;

        cout<<"\n¿Quieres comprobar otra hora (s/n)? ";
        cin>>otro4;

        } while (otro4=='s');

}