//
// Created by erick on 21/2/2022.
//

#include "Alquiler.h"

Alquiler::Alquiler() {
}

Alquiler::Alquiler(std::string nombre, std::string DNI, int dia_i, int mes_i, int anio_i, int dia_f, int mes_f,
                   int anio_f, int posicion)
{
    _nombre=nombre;
    _DNI = DNI;

    _inicial = new Fecha(dia_i, mes_i, anio_i);
    _final = new Fecha(dia_f, mes_f, anio_f);

    _posicion=posicion;

    std::string matricula;
    int eslora;
    int anio;

    std::cout<<"Ingrese datos del barco: "<<std::endl;
    std::cout<<"Matricula: ";
    std::getline(std::cin, matricula);
    std::cout<<"Tamanio de eslora: ";
    std::cin>>eslora;
    std::cout<<"Anio del barco: ";
    std::cin>>anio;


    std::cout<<"Que tipo de barco esta aparcando: \n";
    std::cout<<"1. Velero\n";
    std::cout<<"2. Deportivo\n";
    std::cout<<"3. Yate de lujo\n";
    std::cout<<"Digite su opcion: ";

    int op;
    std::cin>>op;
    switch (op) {
        case 1:
            std::cout<<"\nDigite el numero de mastiles: ";
            int mastiles;
            std::cin>>mastiles;

            _barco = new B_Veleros(matricula, eslora, anio, mastiles);

            break;
        case 2:
            std::cout<<"\nDigite la potencia en CVs: ";
            int CV;
            std::cin>>CV;

            _barco = new B_Deportivos(matricula, eslora, anio, CV);
            break;
        case 3:
            std::cout<<"\nDigite la potencia en CVs: ";
            int cV;
            std::cin>>cV;

            _barco = new B_Yate(matricula, eslora, anio, cV);
            break;
    }

    setValor();

}

void Alquiler::setValor() { //duracion * 10 * eslora * 9
    int duracion;
    duracion = ((_final->getDia())-(_inicial->getDia()))+1;
    duracion = 10 * duracion * (_barco->getEslora());

    _valor = duracion * 9;
}

void Alquiler::mostrarFactura() {
    std::cout<<"\t\t\tFACTURA\n";
    std::cout<<"Nombre: "<<_nombre<<std::endl;
    std::cout<<"DNI: "<<_DNI<<std::endl;
    std::cout<<"Posicion del ancla: "<<_posicion<<std::endl;
    std::cout<<"Fecha de inicio: "<<_inicial->imprimirFechaNum()<<std::endl;
    std::cout<<"Fecha final: "<<_final->imprimirFechaNum()<<std::endl;
    std::cout<<"Datos del barco: \n";
    _barco->mostrarDatos();
    std::cout<<"Valor de la factura: "<<_valor<<std::endl;

}



