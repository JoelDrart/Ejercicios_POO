#include "Empleado.h"

Empleado::Empleado(std::string nombre, int edad, std::string id) {
    _nombre = nombre;
    _edad = edad;
    _id = id;
}

void Empleado::mostrarEmpleado() {
    std::cout<<"Nombre: "<<_nombre<<std::endl;
    std::cout<<"Edad: "<<_edad<<std::endl;
    std::cout<<"ID: "<<_id<<std::endl;
}

//CLASE E_TEMPORAL

E_Temporal::E_Temporal(std::string nombre, int edad, std::string id, float sueldo,
                       int dia_i, int mes_i, int anio_i,
                       int dia_f, int mes_f, int anio_f
                        ) : Empleado(nombre, edad, id) {

    _sueldo = sueldo;
    _inicio.setDia(dia_i);
    _inicio.setMes(mes_i);
    _inicio.setAnio(anio_i);

    _final.setDia(dia_f);
    _final.setMes(mes_f);
    _final.setAnio(anio_f);
}

void E_Temporal::mostrarEmpleado() {
    Empleado::mostrarEmpleado();
    std::cout<<"Fecha de inicio: "<<_inicio.imprimirFechaNum()<<std::endl;
    std::cout<<"Fecha de baja: "<<_final.imprimirFechaNum()<<std::endl;
    std::cout<<"Sueldo mensual fijo: "<<_sueldo<<std::endl;
}

//CLASE E_HORAS
E_Horas::E_Horas(std::string nombre, int edad, std::string id, float pagaPorHora, int horasTrabajadas) : Empleado(nombre, edad, id){
    _pagaPorHora = pagaPorHora;
    _horasTrabajadas = horasTrabajadas;
    setSueldo(pagaPorHora*horasTrabajadas);
}

void E_Horas::mostrarEmpleado() {
    Empleado::mostrarEmpleado();

    std::cout<<"Paga por hora: "<<_pagaPorHora<<std::endl;
    std::cout<<"Total de horas trabajadas este mes: "<<_horasTrabajadas<<std::endl;
    std::cout<<"Total de PAGA MENSUAL: "<<_sueldo<<std::endl;
}

void E_Horas::setSueldo(float sueldo) {
    _sueldo = sueldo;
}

//ClASE E_FIJO
E_Fijo::E_Fijo(std::string nombre, int edad, std::string id, float sueldo, int anio) : Empleado(nombre, edad, id){
    _sueldo=sueldo;
    _anioDeBaja=anio;
}

void E_Fijo::mostrarEmpleado() {
    Empleado::mostrarEmpleado();
    std::cout<<"Anio de baja: "<<_anioDeBaja<<std::endl;
}

