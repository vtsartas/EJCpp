/* 8. Programa que lea por teclado 10 números enteros y los guarde en un array.
A continuación calcula y muestra por separado la media de los valores positivos y la de los valores negativos.
*/

#include <iostream>
#include <string>
// #include <iterator>
#include <stdlib.h> // necesaria para la localización
#include <clocale> // necesaria para la localización en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio8.h"
#include "utils.h"

using namespace std; // necesario para entrada/salida

void ejercicio8(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    int version;
    char otro8;

    int CANT_NUM=10;
    int listado[CANT_NUM];

    int *p;

    do{
        
        p=rellenaLista(listado);
             

        cout<<"\n";

        cout<<"\n¿Quieres realizar de nuevo el ejercicio (s/n)? ";
        cin>>otro8;

    } while (otro8=='s');

} // fin ejercicio8(){}


int *rellenaLista(int listaN[]){
    int i=0;
    int listaSize=sizeof(listaN)/sizeof(listaN[0]);
    int listadonum [listaSize];
    int num;
    do {
        cout<<"\nIntroduce el "<<ordinales(i+1)<<" número: ";
        cin>>num;
        if (num!=0){
            listadonum[i]=num;
            i++;
        }

    }while(i<listaSize);

    return listadonum;
} // fin de rellenaLista()