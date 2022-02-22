#ifndef EJ_POO_ANGULO_H
#define EJ_POO_ANGULO_H

#include "iostream"

//Elaborar una clase que modele ángulos medidos en grados. La clase debe incorporar al menos la suma
//de ángulos, su resta, el opuesto de un ángulo y el ángulo «cero», quedando bien entendido que el ángulo 0
//y el ángulo 360
//son el mismo.

class Angulo {
private:
    double _grados;

public:
    Angulo(){_grados=0;}
    Angulo(double grados);

    friend std::ostream& operator<<(std::ostream &out, Angulo &a);

    friend Angulo operator+(Angulo &a, Angulo &b);
    friend Angulo operator-(Angulo &a, Angulo &b);

    friend Angulo opuesto(Angulo &a);
};


#endif //EJ_POO_ANGULO_H
