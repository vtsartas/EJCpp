#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 22 (hoja V, 7) - Pedir un número de tres cifras y si lo es invertir el orden de estas

int main(){
    int num,unidades,decenas,centenas,numfinal; // Definimos las variables a utilizar

    // Pedimos por pantalla el número a verificar
    cout<<"Introduce un número de tres cifras (100 a 999): ";
    cin>>num;

    	// Si el número está entre 100 y 999 tendrá 3 cifras y lo pondremos al revés
    if (num>99 && num<1000){
        // las unidades serán el resto de dividir el número entre 10
        unidades=num%10;
    	// las decenas serán el resto de dividir el número menos las unidades entre 100 entre 10
		decenas=((num-unidades)%100)/10;
        // las centenas serán el resto de dividir el número menos las unidades y las decenas entre 100 entre 100
		centenas=(((num-unidades)-(decenas*10))%1000)/100;

		// el número al revés se obtendra convirtiendo las unidades en centenas, las decenas tal cual y las centenas se dejan como unidades
		numfinal=(unidades*100)+(decenas*10)+centenas;
		// mostramos el resultado

        cout<<"El numero original ("<<num<<") al revés es "<<numfinal<<".";
    }
    else {
        // si el número no tiene 3 cifras lo indicamos
        cout<<"Número incorrecto: tiene más o menos de tres cifras";
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
