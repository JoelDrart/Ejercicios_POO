#ifndef EJ_POO_EMPLEADO_H
#define EJ_POO_EMPLEADO_H

#include "iostream"
#include "Fecha.h"
//Al añadir nuevas capacidades a la biblioteca descubrimos que necesitamos modelar nuevos tipos de
//empleados:
//Empleado temporal, del que nos interesa saber la fecha de alta y de baja en la empresa.
//En los empleados temporales el sueldo mensual es fijo.

//Empleado por horas. Nos interesa el precio de la hora trabajada, y el número de horas que ha trabajado
//este mes. El primero es un dato fijo, mientras el segundo varía todos los meses.
//En los empleados por horas el sueldo se calcula multiplicando su sueldo por hora por el número de horas
// de este mes.

//Empleado fijo. Debemos añadir a la información que almacenamos sobre él el año de alta en la empresa.
/*Además debemos añadir a todos los empleados la funcionalidad de cálculo del sueldo con las siguientes
consideraciones:
En los empleados fijos el sueldo es el resultado de sumarle a la base un complemento anual fijo multiplicado por
el número de años en la empresa.
*/

class Empleado {
private:
    std::string _nombre;
    int _edad;
    std::string _id;
public:
    Empleado(std::string nombre, int edad, std::string id);

    virtual void mostrarEmpleado();

};

//HIJOS

class E_Temporal : public Empleado{
private:
    Fecha _inicio;
    Fecha _final;
    float _sueldo;
public:
    E_Temporal(std::string nombre, int edad, std::string id,
               float sueldo,
               int dia_i, int mes_i, int anio_i,
               int dia_f, int mes_f, int anio_f
               );

    void mostrarEmpleado();
};

class E_Horas : public Empleado {
private:
    float _pagaPorHora=0;
    int _horasTrabajadas=0;
    float _sueldo = _pagaPorHora * _horasTrabajadas;
public:
    E_Horas(std::string nombre, int edad, std::string id,
            float pagaPorHora, int horasTrabajadas
            );

    void mostrarEmpleado();

    void setSueldo(float sueldo);
};

class E_Fijo : public Empleado{
private:
    int _anioDeBaja;
    float _sueldo;
public:
    E_Fijo(std::string nombre, int edad, std::string id,
           float sueldo, int anio);

    void mostrarEmpleado();


};
#endif //EJ_POO_EMPLEADO_H
