#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 20 (V-5) - Decir si un alumno está o no aprobado según unas condiciones dadas

int main(){
    float nota; // Definimos la variable a utilizar, será real para poder poner decimales

    // Pedimos por pantalla la nota del alumno

    cout<<"Introduce la nota del alumno: ";
    cin>>nota;

    // Si la nota es inferior a 12.50 está desaprobado
    if (nota<12.50){
        cout<<"El alumno está desaprobado.";
    }
    else if (nota<20){
        cout<<"El alumno está aprobado.";
    }
    else {
        cout<<"Error, la nota es superior a 20";
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
