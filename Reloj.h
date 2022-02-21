#ifndef EJ_POO_RELOJ_H
#define EJ_POO_RELOJ_H
#include "iostream"
//Escribir una clase RELOJ que simule el comportamiento de un cronómetro digital
//(con las características puesta_a_cero, incremento, etc.). Cuando el contador
//llegue a 23:59:59 y reciba el mensaje de incremento deberá pasar a 00:00:00.

class Reloj {
private:
    int _horas=0;
    int _minutos=0;
    int _segundos=0;
public:
    Reloj();
    Reloj(int horas, int minutos, int segundos);

    void incremento();
    void puesta_a_cero();

    friend std::ostream& operator<<(std::ostream &out, Reloj &reloj);

};


#endif //EJ_POO_RELOJ_H
