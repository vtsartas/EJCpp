#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// IMV 01 - Mostrar los 'n' primeros números primos

int main(){
    // Definimos la variable a utilizar

    int num,a,b,c;
	bool primo;

	cout<<"¿Cuántos de los primeros números primos quieres mostrar?";
	cin>>num;

    a=1; // inicializamos el contador que recorrerá los números a partir del 1 hasta que se muestren la cantidad de primos solicitada
	c=0; // 'c' será el contador de cúantos números primos hemos mostrado ya


    // Mientras el contador de primos ('c') sea menor que el número pedido ('num') seguirá evaluando.
	// Así, cuando evalúe el número dado ya no evaluará más (no volverá a entrar al mientras).
	while (c<num) {
        primo=true; // De entrada, el número será primo, cosa que cambiará si se cumplen las condiciones que indicaremos
		b=1; // inicializamos el bucle interno que recorrerá los divisores

		// En este bucle comprobaremos que el número dado no sea divisible por ningún otro (salvo 1, que lo son todos)
		while (b<a) {
			if (a%b==0 && b>1) {
				primo=false; // Si el resto de dividirlo por otro menor es cero es que es divisible, por lo que no será primo
				b=a; // damos un valor a 'b' igual a 'a' para salir de este bucle porque ya hemos visto que no es primo
            }
			b++; // incrementamos el contador para ver si 'a' es divisible por el siguiente número menor que si misma
		}

		// Si 'a' no era divisible por números menores (aparte de 1) lo mostraremos al ser primo
		if (primo==true) {
			cout<<a<<"\n"; // mostraremos el número primo localizado
			c++; // añadiremos 1 al contador de primos mostrados
		}

		a++; // pasamos a evaluar el siguiente número mientras sea menor o igual que el dado ('num')
	}

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
