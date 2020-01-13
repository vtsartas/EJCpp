#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// IMV 01 - Mostrar los 'n' primeros n�meros primos

int main(){
    // Definimos la variable a utilizar

    int num,a,b,c;
	bool primo;

	cout<<"�Cu�ntos de los primeros n�meros primos quieres mostrar?";
	cin>>num;

    a=1; // inicializamos el contador que recorrer� los n�meros a partir del 1 hasta que se muestren la cantidad de primos solicitada
	c=0; // 'c' ser� el contador de c�antos n�meros primos hemos mostrado ya


    // Mientras el contador de primos ('c') sea menor que el n�mero pedido ('num') seguir� evaluando.
	// As�, cuando eval�e el n�mero dado ya no evaluar� m�s (no volver� a entrar al mientras).
	while (c<num) {
        primo=true; // De entrada, el n�mero ser� primo, cosa que cambiar� si se cumplen las condiciones que indicaremos
		b=1; // inicializamos el bucle interno que recorrer� los divisores

		// En este bucle comprobaremos que el n�mero dado no sea divisible por ning�n otro (salvo 1, que lo son todos)
		while (b<a) {
			if (a%b==0 && b>1) {
				primo=false; // Si el resto de dividirlo por otro menor es cero es que es divisible, por lo que no ser� primo
				b=a; // damos un valor a 'b' igual a 'a' para salir de este bucle porque ya hemos visto que no es primo
            }
			b++; // incrementamos el contador para ver si 'a' es divisible por el siguiente n�mero menor que si misma
		}

		// Si 'a' no era divisible por n�meros menores (aparte de 1) lo mostraremos al ser primo
		if (primo==true) {
			cout<<a<<"\n"; // mostraremos el n�mero primo localizado
			c++; // a�adiremos 1 al contador de primos mostrados
		}

		a++; // pasamos a evaluar el siguiente n�mero mientras sea menor o igual que el dado ('num')
	}

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
