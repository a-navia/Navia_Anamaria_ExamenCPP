//
// Created by navia on 05-Nov-24.
//
#include "EJ1/EJ1.h"
#include "EJ2/EJ2.h"
#include "EJ3/EJ3.h"
#include <iostream>

int main ()
{
//EJ1 Este ejercicio pide un numero y evalua si es positivo, negativo o cero
    //EJ1 introduccion de numero
    int numero = usuarioNumero();
    //print numero
    std::cout << "El numero introducido es: " << numero << std::endl;
    //EJ1 llamada a la funcion idNumero que hace la evaluacion
    idNumero(numero);
//EJ2 este ejercicio pide un numero y regresa el dia de la semana correspondeinte.
    //EJ2 introduccion de numero
    int numSemana = usuarioDia();
    //print numero de semana
    std::cout << "un numero de la semana: " << numSemana << std::endl;
    //EJ2 llamada a la funcion diaSemana que regresa el dia de la semana
    diaSemana(numSemana);
//EJ3 este ejercicio calcula el promedio de 8 ejercicios con una nota entre 0 y 10 .
    std::cout << "EJ3: Programa para calculo de notas: ";
    //EJ3 llamada a la funcion promedioNotas
    double usuarioNotas();
    //EJ3 llamada a la funcion promedioNotas
    promedioNotas();
//EJ4 en este ejercicio se compara los tres articulo y se suman los dos mas caros para tener el precio total

    return 0;
}
