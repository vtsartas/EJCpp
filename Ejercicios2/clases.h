#ifndef CLASES_H
#define CLASES_H

class Posinegaceros{
    // atributos privados
    private:
        int contapos;
        int contaneg;
        int contaceros;
        int sumapos;
        int sumaneg;
 
    public:
       // método constructor
        Posinegaceros(int cp, int cn, int cc, int sp, int sn);

    // Getter/setters

        // contapos
        void setContapos(int cp);
        int getContapos();
        // contaneg
        void setContaneg(int cn);
        int getContaneg();
        // contaceros
        void setContaceros(int cc);
        int getContaceros();
        // sumapos
        void setSumapos(int sp);
        int getSumapos();
        // sumaneg
        void setSumaneg(int sn);
        int getSumaneg();
    
        Posinegaceros operalista(int *lista);
};

#endif