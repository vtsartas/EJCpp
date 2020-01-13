#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 18 (V-3) - Calcular el reparto de ganancias en proporción al número de acciones sobre el total

int main(){
    // Definimos las variables a utilizar, serán de tipo real para que se puedan realizar los cálculos sin problema
    float totalacciones,acciones1,acciones2,acciones3,ganancias,ganancias1,ganancias2,ganancias3;

    // Pedimos el monto de las ganancias y el número de acciones de cada socio

    cout<<"Introduce el montante de las ganancias obtenidas: ";
    cin>>ganancias;
    cout<<"Introduce el número de acciones del PRIMER socio: ";
	cin>>acciones1;
	cout<<"Introduce el número de acciones del SEGUNDO socio: ";
	cin>>acciones2;
	cout<<"Introduce el número de acciones del TERCER socio: ";
	cin>>acciones3;

    // Calculamos el total de acciones y de la proporción sacamos las ganancias de cada socio
	totalacciones=acciones1+acciones2+acciones3;
	ganancias1=ganancias*(acciones1/totalacciones);
	ganancias2=ganancias*(acciones2/totalacciones);
	ganancias3=ganancias*(acciones3/totalacciones);
	cout<<"El 1er socio obtiene "<<ganancias1<<" ganancias, el 2o "<<ganancias2<<" y el 3o "<<ganancias3<<".";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
