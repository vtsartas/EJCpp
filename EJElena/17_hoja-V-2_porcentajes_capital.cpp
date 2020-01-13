#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 17 (V-2) - Calcular el capital total y el porcentaje de cada socio

int main(){
    float capitaltotal,capitalmiguel,capitaleva,capitaleduardo; // Definimos las variables enteras que vamos a utilizar
    float porcmiguel,porceva,porceduardo; // los porcentajes deberán ser números reales que redondearemos por legibilidad

    // Pedimos el capital de cada socio

    cout<<"Introduce el capital aportado por Miguel: ";
	cin>>capitalmiguel;
	cout<<"Introduce el capital aportado por Eva: ";
	cin>>capitaleva;
	cout<<"Introduce el capital aportado por Eduardo: ";
	cin>>capitaleduardo;

    // Calculamos y mostramos el capital total así como el porcentaje aportado por cada socio
    capitaltotal=capitalmiguel+capitaleva+capitaleduardo ;

    cout<<"El capital total de la sociedad es de "<<capitaltotal<<".";
	porcmiguel=(capitalmiguel*100)/capitaltotal;
	porceva=(capitaleva*100)/capitaltotal;
	porceduardo=(capitaleduardo*100)/capitaltotal;
	cout<<"Miguel tiene un "<<porcmiguel<<"% del total, Eva un "<<porceva<<"% y Eduardo un "<<porceduardo<<"%.";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}

