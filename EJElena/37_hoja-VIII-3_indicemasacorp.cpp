#include <iostream> // Librería básica de entrada y salida, necesaria para cout, cin...
#include <cstdlib> // necesaria para borrar la pantalla
using namespace std;

// Ejercicio 37 - Hoja VIII (3) - Calcular el IMC según la edad, peso y estatura dadas

int main(){

    // Definimos la variable a utilizar
    int edad;
    float peso,estatura,imc;
    bool edadnormal;
	char otrocalculo='s';

	while (otrocalculo=='s') {

        cout<<"Introduce tu edad:\n";
		cin>>edad;
		cout<<"Introduce tu altura en centímetros:\n";
		cin>>estatura;
		cout<<"Introduce tu peso (en Kg, usa el punto . para los decimales):\n";
		cin>>peso;

        // el cálculo se hace con la estatura en metros por lo que introduzco la conversión de los centímetros
		imc=peso/(estatura*estatura/10000);

		if (imc<18.5) {
			cout<<"Tu IMC es "<<imc<<"\nSe considera que tu peso es INFERIOR al normal.\n";
		}

		if (imc>=18.5 && imc<25) {
			cout<<"Tu IMC es "<<imc<<"\nSe considera que tu peso es NORMAL.\n";
		}

		if (imc>=25 && imc<30) {
			cout<<"Tu IMC es "<<imc<<"\nSe considera que tu peso es SUPERIOR al normal.\n";
		}

		if (imc>=30) {
			cout<<"Tu IMC es "<<imc<<"\nSería indicativo de una posible OBESIDAD.\n";
		}

		// según edad
		edadnormal=false;

		if ((edad>=19 && edad<25) && (imc>=19 && imc<=24)) {
			cout<<"Para tu edad ("<<edad<<" años) e IMC ("<<imc<<", tu peso es normal.";
			edadnormal=true;
		}

		if ((edad>=25 && edad<35) && (imc>=20 && imc<=25)) {
			cout<<"Para tu edad ("<<edad<<" años) e IMC ("<<imc<<", tu peso es normal.";
			edadnormal=true;
		}

		if ((edad>=35 && edad<45) && (imc>=21 && imc<=26)) {
			cout<<"Para tu edad ("<<edad<<" años) e IMC ("<<imc<<", tu peso es normal.";
			edadnormal=true;
		}

		if ((edad>=45 && edad<55) && (imc>=22 && imc<=27)) {
			cout<<"Para tu edad ("<<edad<<" años) e IMC ("<<imc<<", tu peso es normal.";
			edadnormal=true;
		}

		if ((edad>=55 && edad<65) && (imc>=23 && imc<=28)) {
			cout<<"Para tu edad ("<<edad<<" años) e IMC ("<<imc<<", tu peso es normal.";
			edadnormal=true;
		}

		if ((edad>=65) && (imc>=24 && imc<=29)) {
			cout<<"Para tu edad ("<<edad<<" años) e IMC ("<<imc<<", tu peso es normal.";
			edadnormal=true;
		}

		if (edadnormal==false) {
			cout<<"Para tu edad ("<<edad<<" años) e IMC ("<<imc<<", tu peso NO se considera como normal.";
        }

		cout<<"\n\n¿Deseas calcular el IMC de otra persona (s/n)?";
		cin>>otrocalculo;
		system("cls");
	}

    return 0;
}
