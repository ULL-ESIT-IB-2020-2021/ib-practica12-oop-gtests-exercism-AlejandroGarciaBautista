/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas.cc
  * @author Alejandro García Bautista
  * @date 27/12/20
  * @brief ....
  * @bug ......
*/

#include <iostream>
#include <fstream>
#include "fechas.h"
#include <string>

std::string kHelpText = "Modo de uso: ./fecha dd/mm/aa N fichero_de_salida.txt"

void Usage(int argc, char* argv[]){
  if(argc != 3){
    std::cout << argv[0] << ": Faltan argumentos para poder ejecutar el programa." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para obtener más información sobre el uso de este programa" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter = argv[1];
  if(parameter == "--help"){
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}