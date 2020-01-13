#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 23 (hoja V, 8) - Pedir un número del 1 al 100 y decir cuántos dígitos tiene

int main(){
    int num,unidades,decenas,centenas; // Definimos las variables a utilizar

    // Pedimos por pantalla el número a verificar
    cout<<"Introduce un número del 1 al 100: ";
    cin>>num;

    // Si el número está entre 1 y 100 indicamos cuántos dígitos tiene. Para ello comprobamos el valor de sus centenas y decenas
    if (num<101){
        // las unidades serán el resto de dividir el número entre 10
        unidades=num%10;
    	// las decenas serán el resto de dividir el número menos las unidades entre 100 entre 10
		decenas=((num-unidades)%100)/10;
        // las centenas serán el resto de dividir el número menos las unidades y las decenas entre 100 entre 100
		centenas=(((num-unidades)-(decenas*10))%1000)/100;

		if (centenas>0) {
			cout<<"El número "<<num<<" tiene tres dígitos";
		}
		else if (decenas>0){
			cout<<"El número "<<num<<" tiene dos dígitos";
		}
		else{
			cout<<"El número "<<num<<" tiene un dígito";
		}
    }

    else {
        // si el número no está entre 1 y 100 o tiene más de 3 dígitos lo indicamos
        if (num<1000){
        cout<<"Número incorrecto: aunque tiene 3 dígitos es mayor a 100.";
        }
        else {
            cout<<"Número incorrecto: tiene cuatro dígitos o más.";
        }
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
