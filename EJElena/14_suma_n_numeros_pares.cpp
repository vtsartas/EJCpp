#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 14 - Mostrar la suma de los primeros 'n' n�meros pares

int main(){
    int n,num,suma,contador; // Definimos las variables que vamos a utilizar

    // Pedimos por pantalla cu�ntos de los primeros n�meros pares sumaremos
    cout<<"Introduce un n�mero. Se calcular� la suma de primeros n n�meros pares: ";
    cin>>n;
	contador=1; // Inicialicamos el contador a 1. Ser� la variable que cuente cu�ntos pares hemos encontrado
	num=1; // inicializamos el valor donde estar�n las cifras a comprobar si son par o impar
	suma=0; // inicializamos la suma a cero

    // mientras n sea menor o igual que el contador a�adiremos el valor de contador a la suma solo cuando sea par
    while (contador<=n){
            // comprobamos si el n�mero a comprobar es par
            if (num%2==0) {
                suma=suma+num; // al ser par sumamos el valor de 'num' a la suma
                contador=contador+1; // al haber obtenido un n�mero par incrementamos su contador en 1
                cout<<"Se ha sumado "<<num<<" y la suma ya es "<<suma<<"\n";
            }
            num=num+1; // a�adimos 1 a 'num' para analizar si el siguiente n�mero es par o impar
    }

    // muestra el valor final de la suma de los n primeros n�meros naturales
    cout<<"La suma de los "<<n<<" primeros n�meros pares es "<<suma<<".\n";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
