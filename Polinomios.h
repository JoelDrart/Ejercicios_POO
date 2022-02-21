#ifndef EJ_POO_POLINOMIOS_H
#define EJ_POO_POLINOMIOS_H

#include "iostream"

//Elaborar una clase POLINOMIO que modele los polinomios de grado dos implementando al menos las
//operaciones de suma (de un polinomio con Current para obtener un tercer polinomio) y producto por un
//número y el cálculo de las raíces reales del polinomio, si es que existen.
class Polinomios {
private:
    int _a=0;
    int _b=0;
    int _c=0;
public:
    Polinomios();
    Polinomios(int, int, int);


    //Operadores
    friend std::ostream& operator<<(std::ostream &out, Polinomios &r);
    friend Polinomios operator+(const Polinomios &p1, const Polinomios &p2);
    friend Polinomios operator-(const Polinomios &p1, const Polinomios &p2);


};


#endif //EJ_POO_POLINOMIOS_H
