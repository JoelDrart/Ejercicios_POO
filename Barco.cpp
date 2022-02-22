//
// Created by erick on 21/2/2022.
//

#include "Barco.h"


Barco::Barco() {}
Barco::Barco(std::string matricula, int eslora, int anioFab) {
    _matricula=matricula;
    _eslora=eslora;
    _anioFab=anioFab;
}

int Barco::getEslora() const {
    return _eslora;
}

void Barco::mostrarDatos() {
    std::cout<<"Matricula: "<<_matricula<<std::endl;
    std::cout<<"Tamanio de eslora: "<<_eslora<<std::endl;
    std::cout<<"Anio De Fabricacion: "<<_anioFab<<std::endl;
}

//CLASE VELEROS
B_Veleros::B_Veleros() {}

B_Veleros::B_Veleros(std::string matricula, int eslora, int anioFab, int mastiles) : Barco(matricula, eslora, anioFab) {
    _mastiles=mastiles;
}
int B_Veleros::getMastiles() const {
    return _mastiles;
}

//CLASE DEPORTIVOS
B_Deportivos::B_Deportivos() {

}

B_Deportivos::B_Deportivos(std::string matricula, int eslora, int anioFab, int potencia)
    : Barco(matricula, eslora, anioFab)
{
    _potencia = potencia;
}

int B_Deportivos::getPotencia() const {
    return _potencia;
}

//CLASE YATE
B_Yate::B_Yate(std::string matricula, int eslora, int anioFab, int potencia)
    : B_Deportivos(matricula, eslora, anioFab,
             potencia)
{

}
