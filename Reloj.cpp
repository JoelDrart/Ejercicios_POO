//
// Created by erick on 19/2/2022.
//
#include "Reloj.h"

Reloj::Reloj() {}
Reloj::Reloj(int horas, int minutos, int segundos) {
_horas = horas;
_minutos = minutos;
_segundos = segundos;
}

void Reloj::incremento() {
    _segundos += 1;
    if(_segundos==60){
        _segundos=0;
        _minutos += 1;
        if(_minutos==60){
            _minutos=0;
            _horas += 1;
            if(_horas==24){
                _horas=0;
            }
        }
    }


}

void Reloj::puesta_a_cero() {
    _horas=0;
    _minutos=0;
    _segundos=0;
}

std::ostream &operator<<(std::ostream &out, Reloj &reloj) {
    out<<reloj._horas<<":"<<reloj._minutos<<":"<<reloj._segundos;
    return out;
}
