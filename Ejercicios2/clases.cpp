#include "clases.h"
#include <string>
#include <iostream>

   // método constructor
Posinegaceros::Posinegaceros(int cp, int cn, int cc, int sp, int sn){
        contapos=cp;
        contaneg=cn;
        contaceros=cc;
        sumapos=sp;
        sumaneg=sn;
    }

// Getter/setters

    // contapos
void Posinegaceros::setContapos(int cp) {
    contapos = cp;
    }
int Posinegaceros::getContapos() {
    return contapos;
    }
    // contaneg
void Posinegaceros::setContaneg(int cn) {
    contaneg = cn;
    }
int Posinegaceros::getContaneg() {
    return contaneg;
    }
    // contaceros
void Posinegaceros::setContaceros(int cc) {
    contaceros = cc;
    }
int Posinegaceros::getContaceros() {
    return contaceros;
    }
    // sumapos
void Posinegaceros::setSumapos(int sp) {
    sumapos = sp;
    }
int Posinegaceros::getSumapos() {
    return sumapos;
    }
    // sumaneg
void Posinegaceros::setSumaneg(int sn) {
    sumaneg = sn;
    }
int Posinegaceros::getSumaneg() {
    return sumaneg;
    }


Posinegaceros Posinegaceros::operalista(int *lista){

    Posinegaceros numero(0,0,0,0,0);
    
    int s; // contador

    for (s=0;s<(sizeof(lista)/sizeof(lista[0]));s++){
        if (lista[s]>0){
            numero.setContapos(numero.getContapos()+1);
            numero.setSumapos(numero.getSumapos()+lista[s]);
        }
        else if (lista[s]<0){
            numero.setContaneg(numero.getContaneg()+1);
            numero.setSumaneg(numero.getSumaneg()+lista[s]);
        }
        else {
            numero.setContaceros(numero.getContaceros()+1);
        }
    }
    return numero;
}