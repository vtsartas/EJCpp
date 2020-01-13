#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 27 - Hoja VI (4) - Averiguar el mayor, el menor y la media de una serie de n�meros dados

int main(){
    // Definimos la variable a utilizar
    int  maximo,minimo,num,contador,suma;
	float media;

    // inicializamos las variables menos 'minimo', que tomar� el valor del primer n�mero
    maximo=0;
	suma=0;
	contador=0;

	// Leemos por 1a vez un n�mero sin entrar al bucle. Necesario por si es 0 y para inicializar 'minimo' (de inicio no puede ser 0)
	cout<<"Introduce un n�mero. Si introduces 0 se indicar� cu�l es el mayor y menor n�mero introducido, as� como su media aritm�tica: ";
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
		cout<<"Introduce un n�mero (ya has introducido "<<contador<<") o 0 para terminar: ";
		cin>>num;
	}

	if (contador==0) {
		cout<<"Has indicado directamente cero";
	}
	else {
		media=(float)(suma)/(float)(contador); // para que funcione y salga una cifra con decimales es necesario convertir los enteros a reales
		cout<<"Has introducido "<<contador<<" n�meros que suman "<<suma<<". Su media aritm�tica es "<<media<<". El mayor ha sido "<<maximo<<" y el menor "<<minimo<<".";
	}

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
