#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 24 - Hoja VI (1) - Indicar importe menú según cantidades consumidas y precios fijos

int main(){
    // Definimos las variables a utilizar
    int bocadillos,refrescos,cervezas;
    float importe,total,preciobocadillo,preciorefresco,preciocerveza;
	bool otrocliente;
	char leerotro;

    // indicamos el precio de cada artículo
	preciobocadillo=1.50;
	preciocerveza=0.75;
	preciorefresco=1.05;

	importe=0; // inicializamos la primera cuenta a cero
	total=0; // incializamos el total de caja a cero
	otrocliente=true; // inicializamos el valor de 'otrocliente' para recoger los datos de la primera cuenta

// Mientras 'otrocliente' sea true pediremos otra cuenta
    while (otrocliente==true) {
		cout<<"Introduce los artículos consumidos por el cliente: ";
		cout<<"\n- Número de bocadillos de jamón: ";
		cin>>bocadillos;
		cout<<"\n- Número de refrescos: ";
		cin>>refrescos;
		cout<<"\n- Número de cervezas: ";
		cin>>cervezas;
		importe=(bocadillos*preciobocadillo)+(cervezas*preciocerveza)+(refrescos*preciorefresco);
		total=total+importe;

		cout<<"\nEl importe de la cuenta de este cliente es "<<importe<<". El total acumulado es "<<total<<".";

		cout<<"\n¿Quieres introducir datos de una nueva cuenta (s/n)?";
		cin>>leerotro;
		if (leerotro=='s') {
			otrocliente=true;
		}
		else {
			otrocliente=false;
		}
    }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}







