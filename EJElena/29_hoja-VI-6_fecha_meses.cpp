#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
#include <string> // Necesario para el manejo de cadenas de caracteres
using namespace std;

// Ejercicio 29 - Hoja VI (6) - Comprobar si una fecha introducida con cifras es correcta y poner el nombre del mes

bool bisiesto(int ano){

if ((ano%4==0 && ano%100!=0) || (ano%100==0 && ano%400==0)) {
		return(true);
	}
	else {
		return(false);
	}

}

int main(){
    // Definimos la variable a utilizar
	int day,month,year;
	string mes_caract;

    // Pedimos los datos de la fecha a comprobar
    cout<<"Introduce el d�a: ";
	cin>>day;
	cout<<"Introduce el mes: ";
	cin>>month;
	cout<<"Introduce el a�o (no se chequear� si es bisiesto): ";
	cin>>year;

	// El a�o debe ser mayor a 0
	if (year>0) {
		// El mes debe ser mayor que cero y menor de 13
		if ((month>0) && (month<13)) {
			// El d�a deber� estar entre 1-31, 1-30 y 1-28 seg�n el mes (no tenemos en cuenta los a�os bisiestos)
			if (((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&& (day>0 && day<32)) || ((month==4 || month==6 || month==9 || month==11) && (day>0 && day<31)) || (month==2 && (day>0 && day<29))) {
				cout<<"La fecha introducida es correcta\n";
				switch (month) {
					case 1:
						mes_caract="enero";
						break;
					case 2:
						mes_caract="febrero";
						break;
					case 3:
						mes_caract="marzo";
						break;
					case 4:
						mes_caract="abril";
						break;
					case 5:
						mes_caract="mayo";
						break;
					case 6:
						mes_caract="junio";
						break;
                    case 7:
						mes_caract="julio";
						break;
					case 8:
						mes_caract="agosto";
						break;
					case 9:
						mes_caract="septiembre";
						break;
					case 10:
						mes_caract="octubre";
						break;
					case 11:
						mes_caract="noviembre";
						break;
					case 12:
						mes_caract="diciembre";
						break;
				}
				cout<<"Fecha: "<<day<<" de "<<mes_caract<<" de "<<year<<".";
			// Terminamos el 'Si' de la comprobaci�n de si el d�a es correcto
			}
			else {
				cout<<"ERROR: El d�a introducido no es posible en el mes indicado.";
			}
		// Terminamos el 'Si' de la comprobaci�n de si el mes es correcto
		}
		else {
			cout<<"ERROR: El mes es incorrecto.";
		}

        } // Terminamos el 'Si' de la comprobaci�n de si el a�o es correcto
        else {
            cout<<"ERROR: El a�o indicado es incorrecto.";
        }

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
