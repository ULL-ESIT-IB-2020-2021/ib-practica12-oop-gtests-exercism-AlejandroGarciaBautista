/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file complejo.cc
  * @author Alejandro García Bautista
  * @date 27/12/20
  * @brief Todas las funciones pertenecientes a la clase complex_number que son necesarias para poder sumar y restar dos números complejos
  * @bug Ninguno conocido por el momento.
*/

#include <iostream>
#include "complejo.h"

complex_number::complex_number(double first_part, double second_part){
  real = first_part;
  imaginary = second_part;
}

complex_number result(0,0);

/** La función print, agrupa la parte real y imaginaria del número para ponerlo en una frase que te indica cual es el número complejo
  * con el que estas operando.
*/
void complex_number::print(){
  std::cout << " Número Complejo = " << real << " + " << imaginary << "i" << std::endl;
}

/** La función add suma por separado la parte real y la parte imaginaria y luego hace lo mismo que la función print para indicar cual es
  * el resultado de la operación. Finalmente en el return suma estos dos para que cuando pase el test poder comprobar que funciona bien.
*/
double complex_number::add(complex_number &complex1, complex_number &complex2){
  result.real = (complex1.real + complex2.real);
  result.imaginary = (complex1.imaginary + complex2.imaginary);
  std::cout << "Suma = " << result.real << " + " << result.imaginary <<"i"<< std::endl;
  return result.real + result.imaginary;
}

/** La función sub hace el mismo funcionamiento que la add pero en este caso en vez de sumar resta y tiene en cuenta si el número 
  * es negativo o positivo.
*/
double complex_number::sub(complex_number &complex1, complex_number &complex2){
  result.real = (complex1.real - complex2.real);
  result.imaginary = (complex1.imaginary - complex2.imaginary);
  if (result.imaginary < 0){
    std::cout << "Resta = " << result.real << result.imaginary << "i" << std::endl;
  }else{
    std::cout << "Resta = " << result.real << " + " << result.imaginary << "i" << std::endl;
  } 
  return result.real + result.imaginary;
}