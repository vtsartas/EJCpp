#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 13 - Mostrar la suma de los primeros 'n' n�meros naturales

int main(){
    int n,suma,contador; // Definimos las variables que vamos a utilizar
    cout<<"Introduce un n�mero. Se calcular� la suma de los n�meros naturales hasta esa cifra:";
    cin>>n;
    contador=1; // inicialicamos el contador con el primer n�mero natural
    suma=0; // inicializamos la suma a cero

    // Mientras el contador sea menor o igual al n�mero dado se a�adira el contador a la suma
    while (contador<=n){
            cout<<"El valor de suma ("<<suma<<") + "<<contador<<" es igual a "<<suma+contador<<".\n";
			suma=suma+contador; // sumamos el valor del contador
			contador=contador+1; // a�adimos 1 al contador para tener el valor del siguiente n�mero natural
    }

    // Mostramos el resultado
    cout<<"La suma de los "<<n<<" primeros n�meros naturales es "<<suma<<".\n";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
