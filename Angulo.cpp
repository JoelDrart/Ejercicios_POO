//
// Created by erick on 22/2/2022.
//

#include "Angulo.h"

Angulo::Angulo(double grados) {
    if(grados<=360.0){
        _grados =grados;
    } else{
        _grados = grados - 360.0;
    }

}

std::ostream &operator<<(std::ostream &out, Angulo &a) {

    out<<a._grados<<" grados";

    return out;
}

Angulo operator+(Angulo &a, Angulo &b) {
    return Angulo(a._grados + b._grados);
}

Angulo operator-(Angulo &a, Angulo &b) {
    return Angulo(a._grados - b._grados);
}

Angulo opuesto(Angulo &a) {
    return Angulo((a._grados + 180.0));
}
