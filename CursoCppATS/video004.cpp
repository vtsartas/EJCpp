// 004 - operaciones básicas

#include <iostream>

using namespace std;

int main (){
    int num1,num2;
    int suma=0,resta=0,multi=0,divi=0;
    cout<<"Introduce el primer valor: "<<endl;
    cin>>num1;
    do
    {
        cout<<"Introduce el segundo valor: "<<endl;
        cin>>num2;
    } while (num2==0);

    suma=num1+num2;
    resta=num1-num2;
    multi=num1*num2;
    divi=num1/num2;

    cout<<"\nLa suma de "<<num1<<" + "<<num2<<" es "<<suma<<"."<<endl;
    cout<<"\nLa resta de "<<num1<<" - "<<num2<<" es "<<resta<<"."<<endl;
    cout<<"\nEl producto de "<<num1<<" x "<<num2<<" es "<<multi<<"."<<endl;
    cout<<"\nLa división de "<<num1<<" entre "<<num2<<" es "<<divi<<"."<<endl;

    // ejercicio 2 - aplicar IVA

    float precio=0,precioIVA=0;
    cout<<"Introduce el precio valor: "<<endl;
    cin>>precio;
    precioIVA=precio*1.21;
    cout<<"El precio final con IVA es de "<<precioIVA<<"."<<endl;
    


    return 0;

}