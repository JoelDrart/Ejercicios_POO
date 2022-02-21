//
// Created by erick on 19/2/2022.
//

#include "Polinomios.h"
#include "iostream"

Polinomios::Polinomios() {}
Polinomios::Polinomios(int a, int b, int c) {
    _a = a;
    _b = b;
    _c = c;
}

std::ostream &operator<<(std::ostream &out, Polinomios &r) {
    out<<std::showpos<<r._a<<"x^2"<<r._b<<"x"<<r._c;
    return out;
}

Polinomios operator+(const Polinomios &p1, const Polinomios &p2) {
    return Polinomios(p1._a+p2._a , p1._b + p2._b , p1._c + p2._c);
}

Polinomios operator-(const Polinomios &p1, const Polinomios &p2) {
    return Polinomios(p1._a - p2._a , p1._b - p2._b , p1._c - p2._c);
}


