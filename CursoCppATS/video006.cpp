// 006 - expresiones

#include <iostream>

using namespace std;

int main(){
    
    // EJERCICIO 1

    float a,b,resultado=0;
    cout<<"Introduce el valor de 'a': "; cin>>a;
    cout<<"Introduce el valor de 'b': "; cin>>b;

    resultado=(a/b)+1;

    cout.precision(4);
    cout<<"\nEl resultado del ejercicio 1 es "<<resultado<<".\n";

    // EJERCICIO 2

    float c,d;
    cout<<"\nIntroduce el valor de 'c': "; cin>>c;
    cout<<"Introduce el valor de 'd': "; cin>>d;

    resultado=(a+b)/(c+d);
    cout<<"\nEl resultado del ejercicio 2 es "<<resultado<<".";

    return 0;

} // fin del main