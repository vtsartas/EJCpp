#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 36 - Hoja VIII (2) - Calcular la depreciaci�n de un coche seg�n la formulaci�n indicada

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
        cout<<"Indica la vida �til del veh�culo en a�os:\n";
        cin>>vidautil;
        cout<<"\n";

        year=1;
        while (year<=vidautil){
            valorreal=(coste-valorresidual)/year;
            depreacu=coste-valorreal;
            cout<<"A�o: "<<2006+year<<" Valor real: "<<valorreal<<" Depreciaci�n acumulada: "<<depreacu<<" .\n";
            year++;
        }

		cout<<"\n�Deseas ver calcular la tabla de depreciaci�n para otro coche (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
