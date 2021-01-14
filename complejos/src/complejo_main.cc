/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file complejo_main.cc
  * @author Alejandro García Bautista
  * @date 27/12/20
  * @brief Programa que suma y resta dos complejos. Si se desea cambiar los datos de los números complejos solo hay que modificarlos
  *        desde este archivo y despues ir a la carpeta build y ejecutar el comando make nuevamente. 
  * @bug Ninguno conocido por el momento.
*/

#include <iostream>
#include "complejo.h"


int main (){
  complex_number complex1(4, 5);
  complex_number complex2(7, -8);
  complex_number result(0,0);
  complex1.print();
  complex2.print();
  result.add(complex1,complex2);
  result.sub(complex1,complex2);
  return 0;
}