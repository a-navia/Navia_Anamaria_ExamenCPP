//
// Created by navia on 05-Nov-24.
//

#include "EJ2.h"
#include <iostream>

//se pide por teclado un numero y se regresa
int usuarioDia() {
    int numSemana;
    std::cout <<"EJ2: introduce un numero (1 a 7) y te dire que dia de la semana es: ";
    std::cin >> numSemana;
    return numSemana;
}
//se recibe un numero y se regresa el dia de la semana correspondiente
void diaSemana(int numSemana) {
    //uso de switch para probar cada caso evaluando el numero de dia
    switch (numSemana) {
        //declaracion de caso 1 a 7
        case 1:
            std::cout << "Lunes" << std::endl;
        //break para terminar el caso
            break;
        case 2:
            std::cout << "Martes" << std::endl;
            break;
        case 3:
            std::cout << "Miercoles" << std::endl;
            break;
        case 4:
            std::cout << "Jueves" << std::endl;
            break;
        case 5:
            std::cout << "Viernes" << std::endl;
            break;
        case 6:
            std::cout << "Sabado" << std::endl;
            break;
        case 7:
            std::cout << "Domingo" << std::endl;
            break;
        //incluyo default aunque no es necesario.
        default:
            std::cout << "Numero no valido" << std::endl;
    }
}
