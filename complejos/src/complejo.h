/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file complejo.h
  * @author Alejandro García Bautista
  * @date 27/12/20
  * @brief ....
  * @bug ......
*/

#pragma once 

class complex_number{
  public:
  complex_number(double first_part, double second_part);
  double add(complex_number &complex1, complex_number &complex2);
  double sub(complex_number &complex1, complex_number &complex2);
  void print();
  private:
  double real;
  double imaginary;  
};


