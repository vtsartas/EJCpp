#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 12v1b - Mostrar el cubo de los primeros n n�meros naturales

int main(){
    int num,n; // Definimos la variable entera 'num'
    num=1; // inicializamos 'num' con el primer n�mero natural

    // Pedimos de cu�ntos de los primeros naturales mostrar el cubo
    cout<<"Indica de cu�ntos de los primeros n�meros naturales quieres calcular su cubo (n^3): ";
    cin>>n;

    // Mientras 'num' sea menor de n+1 mostraremos su cubo y le a�adiremos 1 para el siguiente c�lculo
    while (num<(n+1)){
            cout <<"El cubo de "<<num<<" es "<<num*num*num<<".\n";
            num=num+1;
    }

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
