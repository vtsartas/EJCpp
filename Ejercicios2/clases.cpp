#include "clases.h"


   // método constructor
Clases::Posinegaceros(int cp, int cn, int cc, int sp, int sn){
        contapos=cp;
        contaneg=cn;
        contaceros=cc;
        sumapos=sp;
        sumaneg=sn;
    }

// Getter/setters

    // contapos
Clases::void setContapos(int cp) {
    contapos = cp;
    }
Clases::int getContapos() {
    return contapos;
    }
    // contaneg
Clases::void setContaneg(int cn) {
    contaneg = cn;
    }
Clases::int getContaneg() {
    return contaneg;
    }
    // contaceros
Clases::void setContaceros(int cc) {
    contaceros = cc;
    }
Clases::int getContaceros() {
    return contaceros;
    }
    // sumapos
Clases:: void setSumapos(int sp) {
    sumapos = sp;
    }
Clases::int getSumapos() {
    return sumapos;
    }
    // sumaneg
Clases::void setSumaneg(int sn) {
    sumaneg = sn;
    }
Clases::int getSumaneg() {
    return sumaneg;
    }


Clases::Posinegaceros operalista(int lista []){

    Posinegaceros numero(0,0,0,0,0);
    
    int s; // contador

    for (s=0;s<(sizeof(lista)/sizeof(lista[0]));s++){
        if (lista[s]>0){
            numero.setContapos++;
            numero.setSumapos+=lista[s];
        }
        else if (lista[s]<0){
            numero.setContaneg++;
            numero.setSumaneg+=lista[s];
        }
        else {
            numero.setContaceros++;
        }
    }
    return numero;
}