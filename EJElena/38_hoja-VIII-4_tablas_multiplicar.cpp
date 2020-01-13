#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 38 - Hoja VIII (4) - Mostrar las tablas de multiplicar

int main(){

    // Definimos la variable a utilizar
    int op1,op2,n;
	char otrocalculo='s';

	for (op1=1;op1<11;op1++){
		cout<<"TABLA DEL "<<op1<<"\n";
		cout<<"-------------\n";
            for (op2=1;op2<11;op2++){
                cout<<op1<<" x "<<op2<<" = "<<op1*op2<<"\n";
            }
		cout<<"-------------\n\n";
	}

	cout<<"¿Te gustaría calcular la tabla de multiplicar de números más allá de 10 (s/n)?\n";
	cin>>otrocalculo;
	if (otrocalculo=='s'){

		cout<<"¿Hasta qué número superior a 10 deseas ver la tabla?\n";
		cin>>n;
		for (op1=11;op1<=n;op1++){
		cout<<"\nTABLA DEL "<<op1<<"\n";
		cout<<"-------------\n";
            for (op2=1;op2<11;op2++){
                cout<<op1<<" x "<<op2<<" = "<<op1*op2<<"\n";
            }
		cout<<"-------------\n";
        }

	}

    // Esperamos que se pulse una tecla para cerrar el programa
    cout<<"\nPulse una tecla para salir\n";
    getch();
    return 0;
}
