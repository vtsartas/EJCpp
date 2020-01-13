#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 19 (V-4) - Calcular los sueldos b�sico, bruto y neto seg�n plantea el ejercicio sobre unos datos dados

int main(){
    // Definimos las variables a utilizar, ser�n reales para que los c�lculos se realicen correctamente
    float horas,tarifa,sueldobasico,sueldobruto,sueldoneto;

    // Pedimos por pantalla el total de horas trabajadas este mes y la tarifa a aplicar

    cout<<"Introduce el n�mero de horas trabajadas: ";
    cin>>horas;
    cout<<"Introduce la tarifa por hora a aplicar para calcular el sueldo: ";
	cin>>tarifa;


    // Calculamos el importe de cada tipo de sueldo
    sueldobasico=horas*tarifa;
	sueldobruto=sueldobasico*1.18;
	sueldoneto=sueldobruto*0.88;

	cout<<"El salario b�sico que le corresponde a este trabajador por realizar "<<horas<<" horas a "<<tarifa<<" de coste/hora es de "<<sueldobasico<<".\n";
    cout<<"Su salario bruto ser� de "<<sueldobruto<<" y su sueldo neto de "<<sueldoneto<<".";

    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
