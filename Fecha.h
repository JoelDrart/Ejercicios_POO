//Elaborar una clase Eiffel que modele una fecha. La clase deberá disponer de características que devuelvan el
// día, el mes y el año, además de métodos que que devuelvan un STRING con la fecha en forma
//abreviada (16/02/2000) y extendida (16 de febrero de 2000) y de una función incremento, con un parámetro
//entero, que fabrique una nueva fecha, resultado de incrementar la original en ese número de días.
//Nota 1: Son años bisiestos los múltiplos de cuatro que no lo son de cien, salvo que lo sean de cuatrocientos,
//en cuyo caso si son bisiestos.
//Nota 2: Para la solución de este problema puede ser útil definir un método incrementa_un_dia.
//Nota 3: El ejercicio es mucho más divertido si no se utiliza la clase TIME de la biblioteca estandar de
//SmallEiffel


//TODO: SOBRECARGA - Para que cuando se resten dos objetos fechas me devuelva la diferencia de dias o tambien podria crear funciones
#ifndef EJ_POO_FECHA_H
#define EJ_POO_FECHA_H
#include "iostream"

class Fecha {
private:
    int _dia;
    int _mes;
    int _anio;
    void incrementa_un_dia();
public:
    Fecha();
    Fecha(int dia, int mes, int anio);

    void setDia(int dia);

    void setMes(int mes);

    void setAnio(int anio);

    int getDia() const;

    int getMes() const;

    int getAnio() const;

    std::string imprimirFechaNum();
    std::string imprimirFechaLit();

    void incremento(int dias);
    bool esBisiesto() const;

    static int diferenciaDias(Fecha* fecha1, Fecha* fecha2) ;

};


//CLASES EXCEPTION
class EFueraDeRango{};
class EFueraDeRangoMES{};
class EFueraDeRangoBISIESTO{};

#endif //EJ_POO_FECHA_H
