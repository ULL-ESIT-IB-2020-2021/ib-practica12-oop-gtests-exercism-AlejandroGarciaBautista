/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file fechas.cc
  * @author Alejandro García Bautista
  * @brief ....
  * @bug ......
*/

#include <iostream>
#include <fstream>
#include "fechas.h"
#include <string>
#include <vector>

std::string kHelpText = "Modo de uso: ./fecha fichero_de_entrada.txt fichero_de_salida.txt";

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