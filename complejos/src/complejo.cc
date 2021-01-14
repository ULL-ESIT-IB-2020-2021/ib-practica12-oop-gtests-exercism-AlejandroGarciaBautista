/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file complejo.cc
  * @author Alejandro García Bautista
  * @date 27/12/20
  * @brief ....
  * @bug ......
*/

#include <iostream>
#include "complejo.h"

complex_number::complex_number(double first_part, double second_part){
  real = first_part;
  imaginary = second_part;
}

complex_number result(0,0);

void complex_number::print(){
  std::cout << "Tu numero complejo es " << real << " + " << imaginary << "i" << std::endl;
}

double complex_number::add(complex_number &complex1, complex_number &complex2){
  result.real = (complex1.real + complex2.real);
  result.imaginary = (complex1.imaginary + complex2.imaginary);
  std::cout << "El resultado de la suma es " << result.real << " + " << result.imaginary <<"i"<< std::endl;
  return result.real + result.imaginary;
}

double complex_number::sub(complex_number &complex1, complex_number &complex2){
  result.real = (complex1.real - complex2.real);
  result.imaginary = (complex1.imaginary - complex2.imaginary);
  if (result.imaginary < 0){
    std::cout << "El resultado de la resta es " << result.real << " - " << result.imaginary << "i" << std::endl;
  }else{
    std::cout << "El resultado de la resta es " << result.real << " + " << result.imaginary << "i" << std::endl;
  } 
  return result.real + result.imaginary;
}

