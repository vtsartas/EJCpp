#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 16 (V-1) - Calcular el perímetro de un terreno

int main(){
    int lado,lados,sumalados; // Definimos las variables que vamos a utilizar
    lados=0; // inicialicamos el contador a 0
	sumalados=0; // inicializamos la suma a cero

    // Pedimos el valor de un primer lado
    cout<<"Introduce la longitud del primer lado del terreno (mínimo 3 lados): ";
    cin>>lado;

    // Mientras el valor del lado no sea -1 y a la vez tengamos 3 lados o más, seguiremos pidiendo lados
    while (lados<3){
            // Solo sumaremos el valor del lado si no es -1, en cuyo caso indicaremos el error
            if (lado!=-1){
                sumalados=sumalados+lado;
                lados=lados+1;
                cout<<"\nIntroduce otro lado (llevas "<<lados<<") o -1 si deseas terminar: ";
            }
            else {
                cout<<"\nHas introducido -1 pero aún no has indicado 3 lados ("<<lados<<"). Introduce otro lado: ";}
			cin>>lado;
    }
    while (lado!=-1){
            // En este bucle se sumarán lados más allá del mínimo de tres o hasta que se entre -1
            sumalados=sumalados+lado;
            lados=lados+1;
            cout<<"\nIntroduce otro lado o -1 si deseas terminar: ";
			cin>>lado;
    }

    // Mostremos por pantalla el número total de lados introducido y su suma (el perímetro)
	cout<<"\nHas introducido datos de un terreno de "<<lados<<" lados cuyo perímetro es de "<<sumalados<<".";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
