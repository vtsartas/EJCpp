#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 36 - Hoja VIII (2) - Calcular la depreciación de un coche según la formulación indicada

int main(){

    // Definimos la variable a utilizar
    int year;
    float valorreal,vidautil,coste,valorresidual,depreacu;
	char otrocalculo='s';

	while (otrocalculo=='s') {

        cout<<"Introduce el coste inicial del coche:\n";
        cin>>coste;
        cout<<"Indica el valor residual del coche:\n";
        cin>>valorresidual;
        cout<<"Indica la vida útil del vehículo en años:\n";
        cin>>vidautil;
        cout<<"\n";

        year=1;
        while (year<=vidautil){
            valorreal=(coste-valorresidual)/year;
            depreacu=coste-valorreal;
            cout<<"Año: "<<2006+year<<" Valor real: "<<valorreal<<" Depreciación acumulada: "<<depreacu<<" .\n";
            year++;
        }

		cout<<"\n¿Deseas ver calcular la tabla de depreciación para otro coche (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
