#ifndef EJ_POO_ALQUILER_H
#define EJ_POO_ALQUILER_H

#include "iostream"
#include "Fecha.h"
#include "Barco.h"

/* En un puerto se alquilan amarres para barcos de distinto tipo. Para cada ALQUILER se guarda el nombre
y DNI del cliente, las fechas inicial y final de alquiler, la posición del amarre y el barco que lo ocupará.

 Un alquiler se calcula multiplicando el número de días de ocupación (incluyendo los días inicial y final) por
un módulo función de cada barco (obtenido simplemente multiplicando por 10 los metros de eslora) y por
un valor fijo (9 dolares en la actualidad).
 */

class Alquiler {
private:
    std::string _nombre;
    std::string _DNI;
    Fecha* _inicial;
    Fecha* _final;
    int _posicion;
    Barco* _barco;

    float _valor=0;

    void setValor();
public:
    Alquiler();
    Alquiler(std::string nombre, std::string DNI,
             int dia_i, int mes_i, int anio_i,
             int dia_f, int mes_f, int anio_f,
             int posicion
             );



    void mostrarFactura();

    //virtual ~Alquiler();
};


#endif //EJ_POO_ALQUILER_H
