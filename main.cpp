#include <iostream>
#include "Racional.h"
#include "Polinomios.h"
#include "Reloj.h"
#include "Fecha.h"
#include "Empleado.h"

//Elaborar una clase RACIONAL que modele los números racionales implementando al menos las operaciones de suma,
// resta, opuesto e inverso de un número racional a imitación de la suma o resta de los números
//reales o enteros.

int main() {

    std::cout<<"EMPLEADO TEMPORAL:\n";
    E_Temporal eTemporal("Luis", 25, "8562", 562.8f ,15,3,2023,26,3,2024);
    eTemporal.mostrarEmpleado();
    std::cout<<"\n";


    std::cout<<"EMPLEADO POR HORAS:\n";
    E_Horas eHoras("Pablo",29,"8426",16.2f,85);
    eHoras.mostrarEmpleado();
    std::cout<<"\n";

    std::cout<<"EMPLEADO FIJO:\n";
    E_Fijo eFijo("Juan",50,"2510",1250.8f,2026);
    eFijo.mostrarEmpleado();
    std::cout<<"\n";



    std::cout<<"---------------------------"<<std::endl;

    Fecha fecha(33,4,2001);
    std::cout<<fecha.imprimirFechaLit()<<std::endl;
    std::cout<<fecha.imprimirFechaNum()<<std::endl;

    std::cout<<"Sumamos x dias: "<<std::endl;
    fecha.incremento(86);
    std::cout<<fecha.imprimirFechaLit()<<std::endl;
    std::cout<<fecha.imprimirFechaNum()<<std::endl;




    std::cout<<"---------------------------"<<std::endl;

    Reloj reloj(23,59, 57);
    std::cout<<"Hora: "<<reloj<<std::endl;
    reloj.incremento();
    std::cout<<"Hora: "<<reloj<<std::endl;
    reloj.incremento();
    std::cout<<"Hora: "<<reloj<<std::endl;
    reloj.incremento();
    std::cout<<"Hora: "<<reloj<<std::endl;
    reloj.incremento();
    std::cout<<"Hora: "<<reloj<<std::endl;
    reloj.incremento();



    std::cout<<"---------------------------"<<std::endl;

    Racional num1(8,9);
    std::cout<<"Num1 es: "<<num1<<std::endl;

    Racional num2(5,12);
    std::cout<<"Num2 es: "<<num2<<std::endl;

    Racional num3;
    num3 = num1+num2;
    std::cout<<"Num3 es: "<<num3<<std::endl;

    num3 = opuesto(num1);
    std::cout<<"Num3 (OPUESTO de Num1) es: "<<num3<<std::endl;

    num3 = inverso(num1);
    std::cout<<"Num3 (INVERSO de Num1) es: "<<num3<<std::endl;


    std::cout<<"-----------------------"<<std::endl;
    Racional num4(12.3);
    std::cout<<"12.3 es: "<<num4<<std::endl;

    std::cin.get();
    return 0;
}
