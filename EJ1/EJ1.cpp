//
// Created by navia on 05-Nov-24.
//

#include "EJ1.h"
#include <iostream>

//usa iosream para pedir un numero al usuario
//funcion que mide numero por teclado
int usuarioNumero()
{
    int numero;
    //print del numero, std:: imprime, std::cin recibe
    std::cout << "EJ1: Un numero porfavor: ";
    std::cin >> numero;
    return numero;
}
//funcion que evalua el numero introducido
void idNumero(int numero) {
    //evaluacion si es positivo "mayor que 0"
    if (numero > 0) {
        std::cout << "el numero es positivo" << std::endl;
    }
    //evaluccion si es negativo "menor que 0"
    else if (numero < 0){
                std::cout << "el numero es negativo" << std::endl;
            }
    //else que al no cumplir las condiciones anteriores es 0
    else {
                std::cout << "el numero es cero" << std::endl;
    }
}
