#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 10 - Decir si el interesado puede acceder al ciclo formativo pro haber hecho bachillerato o la prueba de acceso.

int main(){
    // Definimos las variables tipo carácter 'bachiller' y 'prueba'
    char bachiller, prueba;
    // Averiguamos si se ha superado el bachillerato
    cout <<"¿Tienes el título de bachillerato? (s/n): ";
    cin >>bachiller;
    // Si el número es cero indicamos que no es par ni impar. Si no, seguimos.
    if (bachiller=='s'){
            cout <<"Puedes acceder al ciclo al tener el bachillerato.";
    }
    // Si no, averiguamos si se ha superado la prueba de acceso
    else {
        cout <<"¿Has superado la prueba de acceso? (s/n): ";
        cin >>prueba;
        if ((prueba=='s')){
            cout <<"Puedes acceder al ciclo al haber superado la prueba de acceso.";
        }
        else {
          cout <<"No puedes acceder al ciclo al no tener el bachillerato ni haber superado la prueba de acceso.";
        }
    }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
