// 010 - expresiones

#include <iostream>
#include <math.h> // necesaria para operaciones matemáticas como la raiz cuadrada ('sqrt()') o la potencia ('pow()')

#include <clocale>
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

using namespace std;

int main(){

    setlocale(LC_CTYPE,"spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
    SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows
    
    // EJERCICIO 9 - cálculo de una función dada

    float a1,b1,resultado;
    cout<<"Introduce el valor de 'a': "; cin>>a1;
    cout<<"Introduce el valor de 'b': "; cin>>b1;

    resultado=(sqrt(a1))/((pow(b1,2))-1);

    cout<<"El resultado es "<<resultado<<".\n";


    // EJERCICIO 10 - resolver una ecuación de 2o grado del tipo ax2+bx+c=0

    int a,b,c,x1,x2;
    cout<<"Introduce el valor de 'a': "; cin>>a;
    cout<<"Introduce el valor de 'b': "; cin>>b;
    cout<<"Introduce el valor de 'c': "; cin>>c;
    cout<<"Se resolverá el valor 'x' de la ecuación "<<a<<"x^2+"<<b<<"x+"<<c<<"=0.\n";

    x1=((b*-1)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2=((b*-1)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    cout<<"Resolución: "<<(b*-1)<<" más/menos raiz cuadrada de "<<(pow(b,2)-(4*a*c))<<" entre "<<(2*a)<<".\n";
    cout<<"Los resultados son (+)x="<<x1<<" y (-)x="<<x2<<".";

    return 0;

} // fin del main