#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 27 - Hoja VI (4) - Averiguar el mayor, el menor y la media de una serie de números dados

int main(){
    // Definimos la variable a utilizar
    int  maximo,minimo,num,contador,suma;
	float media;

    // inicializamos las variables menos 'minimo', que tomará el valor del primer número
    maximo=0;
	suma=0;
	contador=0;

	// Leemos por 1a vez un número sin entrar al bucle. Necesario por si es 0 y para inicializar 'minimo' (de inicio no puede ser 0)
	cout<<"Introduce un número. Si introduces 0 se indicará cuál es el mayor y menor número introducido, así como su media aritmética: ";
	cin>>num;
	minimo=num;

	while (num!=0) {
		suma=suma+num;
		contador++;
		if (num>maximo) {
			maximo=num;
        }
		if (num<minimo) {
			minimo=num;
		}
		cout<<"Introduce un número (ya has introducido "<<contador<<") o 0 para terminar: ";
		cin>>num;
	}

	if (contador==0) {
		cout<<"Has indicado directamente cero";
	}
	else {
		media=(float)(suma)/(float)(contador); // para que funcione y salga una cifra con decimales es necesario convertir los enteros a reales
		cout<<"Has introducido "<<contador<<" números que suman "<<suma<<". Su media aritmética es "<<media<<". El mayor ha sido "<<maximo<<" y el menor "<<minimo<<".";
	}

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
