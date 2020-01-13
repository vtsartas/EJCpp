#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 13 - Mostrar la suma de los primeros 'n' números naturales

int main(){
    int n,suma,contador; // Definimos las variables que vamos a utilizar
    cout<<"Introduce un número. Se calculará la suma de los números naturales hasta esa cifra:";
    cin>>n;
    contador=1; // inicialicamos el contador con el primer número natural
    suma=0; // inicializamos la suma a cero

    // Mientras el contador sea menor o igual al número dado se añadira el contador a la suma
    while (contador<=n){
            cout<<"El valor de suma ("<<suma<<") + "<<contador<<" es igual a "<<suma+contador<<".\n";
			suma=suma+contador; // sumamos el valor del contador
			contador=contador+1; // añadimos 1 al contador para tener el valor del siguiente número natural
    }

    // Mostramos el resultado
    cout<<"La suma de los "<<n<<" primeros números naturales es "<<suma<<".\n";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
