#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 23 (hoja V, 8) - Pedir un n�mero del 1 al 100 y decir cu�ntos d�gitos tiene

int main(){
    int num,unidades,decenas,centenas; // Definimos las variables a utilizar

    // Pedimos por pantalla el n�mero a verificar
    cout<<"Introduce un n�mero del 1 al 100: ";
    cin>>num;

    // Si el n�mero est� entre 1 y 100 indicamos cu�ntos d�gitos tiene. Para ello comprobamos el valor de sus centenas y decenas
    if (num<101){
        // las unidades ser�n el resto de dividir el n�mero entre 10
        unidades=num%10;
    	// las decenas ser�n el resto de dividir el n�mero menos las unidades entre 100 entre 10
		decenas=((num-unidades)%100)/10;
        // las centenas ser�n el resto de dividir el n�mero menos las unidades y las decenas entre 100 entre 100
		centenas=(((num-unidades)-(decenas*10))%1000)/100;

		if (centenas>0) {
			cout<<"El n�mero "<<num<<" tiene tres d�gitos";
		}
		else if (decenas>0){
			cout<<"El n�mero "<<num<<" tiene dos d�gitos";
		}
		else{
			cout<<"El n�mero "<<num<<" tiene un d�gito";
		}
    }

    else {
        // si el n�mero no est� entre 1 y 100 o tiene m�s de 3 d�gitos lo indicamos
        if (num<1000){
        cout<<"N�mero incorrecto: aunque tiene 3 d�gitos es mayor a 100.";
        }
        else {
            cout<<"N�mero incorrecto: tiene cuatro d�gitos o m�s.";
        }
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
