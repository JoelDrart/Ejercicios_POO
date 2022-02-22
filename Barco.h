#ifndef EJ_POO_BARCO_H
#define EJ_POO_BARCO_H

#include "iostream"
//Un BARCO se caracteriza por su matrícula, su eslora en metros y año de fabricación.

/* número de mástiles para veleros
potencia en CV para embarcaciones deportivas a motor
potencia en CV y número de camarotes para yates de lujo.
El módulo de los barcos de un tipo especial se obtiene como el mólulo normal mas:
el número de mástiles para veleros
la potencia en CV para embarcaciones deportivas a motor
la potencia en CV más el número de camarotes para yates de lujo.*/
class Barco {
private:
    std::string _matricula;
    int _eslora;
    int _anioFab;
public:
    Barco();
    Barco(std::string matricula, int eslora, int anioFab);

    void mostrarDatos();

    int getEslora() const;
};

//CLASE VELEROS
class B_Veleros : public Barco {
private:
    int _mastiles;
public:
    B_Veleros();
    B_Veleros(std::string matricula, int eslora, int anioFab, int mastiles);

    int getMastiles() const;


};

//CLASE DEPORTIVOS
class B_Deportivos : public Barco {
private:
    int _potencia;
public:
    B_Deportivos();
    B_Deportivos(std::string matricula, int eslora, int anioFab, int potencia);

    int getPotencia() const;
};

//CLASE YATELUJO
class B_Yate : public B_Deportivos {
public:
    B_Yate();
    B_Yate(std::string matricula, int eslora, int anioFab, int potencia);
};



#endif //EJ_POO_BARCO_H
