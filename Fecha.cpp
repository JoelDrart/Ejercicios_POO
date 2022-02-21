#include "Fecha.h"
#include "string"

Fecha::Fecha(int dia, int mes, int anio) {

    _anio= abs(anio);

    try {
        _dia=dia;
        _mes=mes;
        _anio=anio;
        if(dia<=0 || dia >=32 || mes <=0 || mes >12 || anio <= 0){
            throw EFueraDeRango();
        }
        switch (mes) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(dia >31){
                    throw EFueraDeRangoMES();
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(dia>30){
                    throw EFueraDeRangoMES();
                }
                break;
            case 2:
                if(esBisiesto()){
                    if(dia>29){
                        throw EFueraDeRangoBISIESTO();
                    }
                } else{
                    if(dia>28){
                        throw EFueraDeRangoBISIESTO();
                    }
                }
                break;

        }


    } catch (EFueraDeRango){
        _dia=1;
        _mes=1;
        _anio=anio;
    } catch (EFueraDeRangoMES){
        _dia=28;
        _mes=mes;
        _anio=anio;
    } catch (EFueraDeRangoBISIESTO) {
        _dia=28;
        _mes=mes;
        _anio=anio;
    }
}

std::string Fecha::imprimirFechaNum() {
    std::string fecha;
    fecha = std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_anio);
    return fecha;
}

std::string Fecha::imprimirFechaLit() {
    std::string fecha;
    fecha = std::to_string(_dia) + " de";


    switch (_mes) {
        case 1: fecha = fecha + " enero de "; break;
        case 2: fecha = fecha + " febrero de "; break;
        case 3: fecha = fecha + " marzo de "; break;
        case 4: fecha = fecha + " abril de "; break;
        case 5: fecha = fecha + " mayo de "; break;
        case 6: fecha = fecha + " junio de "; break;
        case 7: fecha = fecha + " julio de "; break;
        case 8: fecha = fecha + " agosto de "; break;
        case 9: fecha = fecha + " septiembre de "; break;
        case 10: fecha = fecha + " octubre de "; break;
        case 11: fecha = fecha + " noviembre de "; break;
        case 12: fecha = fecha + " diciembre de "; break;
    }

    fecha = fecha + std::to_string(_anio);

    return fecha;
}

void Fecha::incremento(int dias) {

    if(dias<0) dias=0;

    int i=0;
    while (i != dias){
        incrementa_un_dia();
        i++;
    }
}

void Fecha::incrementa_un_dia() {
    int mesendias;

    switch (_mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: mesendias=31; break;
        case 4:
        case 6:
        case 9:
        case 11: mesendias = 30; break;
        case 2:
            if(esBisiesto()){
                mesendias=29;
            } else{
                mesendias=28;
            }
            break;
        
    }
    
    _dia +=1;
    
    
    if(_dia == mesendias+1){
        _dia=1;
        _mes +=1;
        if(_mes==13){
            _mes=1;
            _anio +=1;
        }
    }
}

bool Fecha::esBisiesto() const {
    if(_anio%4 ==0){
        return true;
        if(_anio%100 == 0){
            if(_anio%400 != 0){
                return false;
            }
        }
    } else{
        return false;
    }
}
