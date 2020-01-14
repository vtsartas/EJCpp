/* 6. Programa que pida que se introduzcan dos números enteros por teclado
    y muestre los números que van desde el menor hasta el mayor de los números
    introducidos. Los dos números introducidos deben ser distintos. Si son
    iguales se mostrará un mensaje indicandolo y se vuelven a introducir.
    Realizar una nueva versión del programa que escriba los números en
    sentido inverso (del mayor al menor) */

#include <iostream>
//#include <string>
#include <stdlib.h> // necesaria para la localización
#include <clocale> // necesaria para la localización en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio6.h"

using namespace std; // necesario para entrada/salida

void ejercicio6(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows

    int num1,num2,numaux,sentido;
    int i;
    char otro6;

    do{
        cout<<"Introduce el primer número: "; cin>>num1;
        do{
            cout<<"Introduce el segundo número: "; cin>>num2;
            if (num2==num1){
                cout<<"ERROR: el segundo número no puede ser igual al primero.\n";
            }
        }while(num1==num2); // fin do...while introducción segundo número

        // ordenamos de menor a mayor si hiciese falta
        if (num1>num2){
            numaux=num1;
            num1=num2;
            num2=numaux;
        }

        do {
            cout<<"¿En qué sentido quieres mostrar los números entre "<<num1<<" y "<<num2<<"?\n";
            cout<<"1. De menor a mayor.\n";
            cout<<"2. De mayor a menor.\n";
            cin>>sentido;
            if (sentido<1||sentido>2){
                cout<<"ERROR: el sentido introducido no es correcto.\n";
            }
        }while(sentido<1||sentido>2); // fin del while para el sentido

        if (sentido==1){
            for (i=num1;i<=num2;i++){
                cout<<i<<" ";
            }
        }
        else{
            for (i=num2;i>=num1;i--){
                cout<<i<<" ";
            }
        }

        cout<<"\n¿Quieres repetir el ejercicio con otros números (s/n)? ";
        cin>>otro6;

    } while (otro6=='s');

} // fin ejercicio6(){}