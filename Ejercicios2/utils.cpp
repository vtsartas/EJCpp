#include <iostream>
#include <string.h>

using namespace std;

bool bisiesto(int anno){
    return ( ((anno%4==0 and anno%100!=0)||( (anno%100==0)&&(anno%400==0)) ) )?true:false;
}

string mestxt(int m){
    string mes[12]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
    return mes[m-1];
} // fin mestxt(){}

// días del mes (no bisiesto)
int diasmes(int mes){
    int listadiasmes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    return listadiasmes[mes-1];
}

// días del mes (bisiesto)
int diasmesb(int mes){
    int listadiasmes[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    return listadiasmes[mes-1];
}

// retorna si un entero es par o impar
bool parimpar(int n){
    return (n%2==0)?true:false;
}

bool posinega(int n){
    return(n>0)?true:false;
}

// retorna el texto del ordinal del número indicado
string ordinales(int n){

    string lista[]={"primer","segundo","tercer","cuarto","quinto","sexto","séptimo","octavo","noveno","décimo"};
    return lista[n];
    
}
