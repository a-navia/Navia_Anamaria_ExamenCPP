//
// Created by navia on 05-Nov-24.
//

#include "EJ3.h"
#include <iostream>
#include <vector>

//introducir notas y calcular promedio
double usuarioNotas() {
    double notas;
    //print teclado y recibe notas
    std::cout << "EJ3: Introduce la nota: ";
    std::cin >> notas;
    return notas;
}
//void ya que no tiene return
//calcular promedio
void promedioNotas() {
    //numero de ejercicios fueron 8
    int numeroNotas = 8;
    //vector de notas para guardar las notas "array"
    std::vector<double> notas(numeroNotas);
    //suma de las notas
    double suma = 0.0;
    //ciclo para introducir las notas, i inicializa, i menor a 8, i incrementa,
    for (int i = 0; i < 8; ++i) {
        //notas en la posicion i es igual a la funcion usuarioNotas
        notas[i] = usuarioNotas();
        //suma es igual a suma mas notas en la posicion i, suma las notas guardadas
        suma += notas[i];
    }
    //calculo promedio, suma total dividido por el numero de notas (x/8)
    double promedio = suma / numeroNotas;
    //print promedio
    std::cout << "El promedio de las notas es: " << promedio << std::endl;
}