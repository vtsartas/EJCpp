#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 15 - Mostrar la media de una serie de n�meros que dejaremos de introducir al indicar -1

int main(){
    int n,suma,contador; // Definimos las variables que vamos a utilizar
	contador=0; // inicialicamos el contador a 0 por si lo primero introducido es -1
	suma=0; // inicializamos la suma a cero

    // Pedimos un primer n�mero
    cout<<"Introduce un n�mero o -1 si deseas terminar: ";
    cin>>n;

    // Mientras el n�mero introducido no sea -1 lo a�adiremos a la suma y sumaremos 1 al contador
    while (n!=-1){
            suma=suma+n;
            contador=contador+1;
            cout<<"\nIntroduce otro n�mero o -1 si deseas terminar: ";
			cin>>n;
    }

    // Si el contador es 0 es porque directamente se ha introducido -1 y no haremos la media, s� la hacemos en caso contrario
	if (contador==0) {
		cout<<"\nHas terminado directamente con -1 por lo que no se har� la media";
	}
	else {
		cout<<"La media de los "<<contador<<" n�meros que has introducido es "<<(suma/contador)<<".";
	}

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
