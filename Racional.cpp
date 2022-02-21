//
// Created by erick on 18/2/2022.
//
#include "iostream"
#include "Racional.h"
#include "iomanip"


//CONSTRUCTORES
Racional::Racional() {}
Racional::Racional(float numerador, float denominador) {
    _numerador=numerador;
    _denominador=denominador;
}
Racional::Racional(float decimal) {
    int entero = int(decimal);
    float _pdecimal= decimal - entero;

    int numDecimales=0;
    while (_pdecimal!=0){
        _pdecimal *= 10;
        numDecimales++;
        _pdecimal = _pdecimal - (int(_pdecimal));
    }

    float multiplicador=10;
    for(int i=1; i<numDecimales; i++){
        multiplicador *= 10;
    }

    _numerador= decimal * multiplicador;
    _denominador = multiplicador;
}


//METODOS (OPERADORES)


Racional operator+(const Racional &a, const Racional &b) {

    return Racional(a._numerador + b._numerador, a._denominador + b._denominador);
}
Racional operator-(const Racional &a, const Racional &b) {

    return Racional(a._numerador - b._numerador, a._denominador - b._denominador);
}
Racional operator*(const Racional &a, const Racional &b) {

    return Racional(a._numerador * b._numerador, a._denominador * b._denominador);
}

//Metodos
Racional opuesto(Racional &racional) {
    return Racional((racional._numerador)*-1,racional._denominador);
}

Racional inverso(Racional &racional) {
    return Racional(racional._denominador, racional._numerador);
}

std::ostream &operator<<(std::ostream &out, Racional &r) {
    out<<std::fixed<<std::setprecision(2)<<r._numerador<<"/"<<r._denominador;
    return out;
}


