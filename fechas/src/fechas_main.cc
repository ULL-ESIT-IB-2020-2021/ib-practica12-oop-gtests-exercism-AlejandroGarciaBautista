/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas_main.cc
  * @author Alejandro García Bautista
  * @date 27/12/20
  * @brief ....
  * @bug ....
*/

#include <iostream>
#include <fstream>
#include "fechas.h"
#include <string>
#include <vector>


int main (int argc, char* argv[]){
  Usage(argc, argv);
  std::ifstream file_dates (argv[1]);
  std::ofstream out_file (argv[2]);
  std::string dates;
  if(!file_dates){
    std::cout << "No se pudo abrir el archivo" << std::endl;
  }
  while(file_dates){
    std::getline(file_dates, dates);
    std::vector <std::string> all_dates = dates;
  }
  
}
