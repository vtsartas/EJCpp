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
#include "clases.h"

using namespace std; // necesario para entrada/salida

void ejercicio8(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    char otro8;
    string mensaje;

    const int CANT_NUM=10;
    int i;

    // como C++ no permite que los métodos retornen arrays, debemos usar punteros para hacer tal función.
    // para recorrerlo, tendremos que ir señalando las siguientes posiciones de memoria en el for en lugar de usar array[]
    
    int l[CANT_NUM];
    int *p; // definimos un puntero entero que hará las veces de 'array' cuando apuntemos a uno

    int cneg,cpos,ccer,csump,csumn;

    Posinegaceros lista(0,0,0,0,0); // creamos un objeto de la clase que hemos montado para facilitar la obtención de datos del listado

    do{
        
        p=rellenaLista(CANT_NUM); // apuntamos el puntero a la lista rellena

        lista=lista.operalista(p);

        mensaje="En el listado de "+to_string(CANT_NUM)+" valores que has introducido había ";
        mensaje+=to_string(lista.getContapos())+" positivos y ";
        mensaje+=(lista.getContapos()>0?("su media es "+to_string(lista.getSumapos()/lista.getContapos())):"")+" y ";
        mensaje+=to_string(lista.getContaneg())+" negativos";
        mensaje+=(lista.getContaneg()>0?(" cuya media es "+to_string(lista.getSumaneg()/lista.getContaneg())):"");
        mensaje+=".\n";

        cout<<mensaje;

        /* muestra el array
        for (i=0;i<CANT_NUM;i++){
            cout<<"*p + "<<i<<" = "<<(*(p+i))<<".\n";
        } */             

        cout<<"¿Quieres realizar de nuevo el ejercicio (s/n)? ";
        cin>>otro8;

    } while (otro8=='s');

    delete p;

} // fin ejercicio8(){}


// método para rellenar el array de forma manual

// C++ NO PERMITE DEVOLVER DE FORMA DIRECTA UN ARRAY POR LO QUE SE HACE CON PUNTEROS

// el método es del tipo int* y devuelve un puntero a un array
int * rellenaLista(int tam){
    int i=0; // contador
    //int * puntarray= new int [tam]; // definiremos un puntero a un objeto array que podremos usar como tal con [i], etc
    int num;

    int puntarray[tam];

    // lo iremos rellenando con números enteros diferentes a 0
    cout<<"Introduce "<<tam<<" números enteros, positivos o negativos (no '0').\n";

    do {
        cout<<"Introduce el "<<ordinales(i)<<" número: ";
        cin>>num;
        if (num!=0){
            puntarray[i]=num;
            i++;
        }
        else{
            cout<<"ERROR: has introducido '0'. Introduce otro número entero positivo o negativo.";
        }

    }while(i<tam);

    return puntarray; // el retorno apunta el puntero al contenido del array relleno

} // fin de rellenaLista()