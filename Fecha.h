//Elaborar una clase Eiffel que modele una fecha. La clase deberá disponer de características que devuelvan el
// día, el mes y el año, además de métodos que que devuelvan un STRING con la fecha en forma
//abreviada (16/02/2000) y extendida (16 de febrero de 2000) y de una función incremento, con un parámetro
//entero, que fabrique una nueva fecha, resultado de incrementar la original en ese número de días.
//Nota 1: Son años bisiestos los múltiplos de cuatro que no lo son de cien, salvo que lo sean de cuatrocientos,
//en cuyo caso si son bisiestos.
//Nota 2: Para la solución de este problema puede ser útil definir un método incrementa_un_dia.
//Nota 3: El ejercicio es mucho más divertido si no se utiliza la clase TIME de la biblioteca estandar de
//SmallEiffel

#ifndef EJ_POO_FECHA_H
#define EJ_POO_FECHA_H
#include "iostream"

class Fecha {
private:
    int _dia=1;
    int _mes=1;
    int _anio=1988;
    void incrementa_un_dia();
public:
    Fecha(int dia, int mes, int anio) ;

    std::string imprimirFechaNum();
    std::string imprimirFechaLit();

    void incremento(int dias);
    bool esBisiesto() const;



};


//CLASES EXCEPTION
class EFueraDeRango{};
class EFueraDeRangoMES{};
class EFueraDeRangoBISIESTO{};

#endif //EJ_POO_FECHA_H
