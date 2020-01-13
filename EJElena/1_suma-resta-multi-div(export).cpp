// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int a;
	int b;
	float division;
	float multi;
	float resta;
	float suma;
	// Pide las variables a y b por pantalla
	cin >> a >> b;
	// SUMA
	suma = a+b;
	cout << "La suma de " << a << " más " << b << " es igual a " << suma << endl;
	// RESTA
	resta = a-b;
	cout << a << " menos " << b << " es igual a " << resta << endl;
	// MULTIPLICACIÓN
	multi = a*b;
	cout << a << " por " << b << " es igual a " << multi << endl;
	// DIVISIÓN
	if (b==0) {
		cout << "Error, no es posible dividir entre 0" << endl;
	} else {
		division = a/b;
		cout << a << " entre " << b << " es igual a " << division << endl;
	}
	return 0;
}

