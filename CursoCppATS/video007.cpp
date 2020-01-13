// 007 - expresiones

#include <iostream>

using namespace std;

int main(){
    
    // EJERCICIO 3

    float a,b,c,d,e,f,resultado=0;
    cout<<"Introduce el valor de 'a': "; cin>>a;
    cout<<"Introduce el valor de 'b': "; cin>>b;
    cout<<"\nIntroduce el valor de 'c': "; cin>>c;
    cout<<"Introduce el valor de 'd': "; cin>>d;
    cout<<"\nIntroduce el valor de 'e': "; cin>>e;
    cout<<"Introduce el valor de 'f': "; cin>>f;

    resultado=(a+(b/c))/(d+(e/f));

    cout.precision(4);
    cout<<"\nEl resultado del ejercicio 3 es "<<resultado<<".\n";

    // EJERCICIO 4

    resultado=a+(b/(c-d));
    cout<<"\nEl resultado del ejercicio 4 es "<<resultado<<".";

    return 0;

} // fin del main