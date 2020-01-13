#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 12v1a - Mostrar el cuadrado de los primeros n números naturales

int main(){
    int num,n; // Definimos la variable entera 'num'
    num=1; // inicializamos 'num' con el primer número natural

    // Pedimos de cuántos de los primeros naturales mostrar el cuadrado
    cout<<"Indica de cuántos de los primeros números naturales quieres calcular su cuadrado: ";
    cin>>n;

    // Mientras 'num' sea menor de n+1 mostraremos su cuadrado y le añadiremos 1 para el siguiente cálculo
    while (num<(n+1)){
            cout <<"El cuadrado de "<<num<<" es "<<num*num<<".\n";
            num=num+1;
    }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
