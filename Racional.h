
//La estructura ifndef comprueba que si la cabecera Racional.h ya se ha incluido antes -> no se declare de nuevo
#ifndef EJ_POO_RACIONAL_H
#define EJ_POO_RACIONAL_H



class Racional {
private:
    float _numerador=0;
    float _denominador=1;
    float _decimal= _numerador/_denominador;
public:
    //CONSTRUCTORES
    Racional();
    Racional(float numerador, float denominador);
    Racional(float decimal);

    //SETTER - GETTER
    inline float getNumerador() const {
        return _numerador;
    }
    inline void setNumerador(float numerador) {
        _numerador = numerador;
    }
    inline float getDenominador() const {
        return _denominador;
    }
    inline void setDenominador(float denominador) {
        _denominador = denominador;
    }
    inline float getDecimal() const{
        return _decimal;
    }

    //METODOS (SOBRE CARGA DE OPERADORES)

    friend std::ostream& operator<<(std::ostream &out, Racional &r);


    friend Racional operator+(const Racional &a, const Racional &b);
    friend Racional operator-(const Racional &a, const Racional &b);
    friend Racional operator*(const Racional &a, const Racional &b);


    //METODOS
    friend Racional opuesto(Racional &racional);
    friend Racional inverso(Racional &racional);


};


#endif //EJ_POO_RACIONAL_H
