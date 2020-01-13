#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 14 - Mostrar la suma de los primeros 'n' números pares

int main(){
    int n,num,suma,contador; // Definimos las variables que vamos a utilizar

    // Pedimos por pantalla cuántos de los primeros números pares sumaremos
    cout<<"Introduce un número. Se calculará la suma de primeros n números pares: ";
    cin>>n;
	contador=1; // Inicialicamos el contador a 1. Será la variable que cuente cuántos pares hemos encontrado
	num=1; // inicializamos el valor donde estarán las cifras a comprobar si son par o impar
	suma=0; // inicializamos la suma a cero

    // mientras n sea menor o igual que el contador añadiremos el valor de contador a la suma solo cuando sea par
    while (contador<=n){
            // comprobamos si el número a comprobar es par
            if (num%2==0) {
                suma=suma+num; // al ser par sumamos el valor de 'num' a la suma
                contador=contador+1; // al haber obtenido un número par incrementamos su contador en 1
                cout<<"Se ha sumado "<<num<<" y la suma ya es "<<suma<<"\n";
            }
            num=num+1; // añadimos 1 a 'num' para analizar si el siguiente número es par o impar
    }

    // muestra el valor final de la suma de los n primeros números naturales
    cout<<"La suma de los "<<n<<" primeros números pares es "<<suma<<".\n";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
