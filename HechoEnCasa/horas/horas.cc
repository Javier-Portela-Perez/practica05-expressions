/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file horas.cc
  * @author alu0101569741@ull.edu.es
  * @date Oct 30 2022
  * @brief Este programa te deice cuantas horas hay en x segundos 
  */


#include <iostream>
int main() {
  std::cout << "Este programa lee un número de segundos y dice cuántas horas enteras contienen" << std::endl << "Da una cantidad de segundos" << std::endl;
  int segundos;
  std::cin >> segundos;
  if (3600 <= segundos < 7200) {
    std::cout << "en " << segundos << " segundos ha pasado " <<  segundos / 3600 << " hora entera." << std::endl;
  }
  else {
    std::cout << "en " << segundos << " segundos han pasado " << segundos / 3600 << " horas enteras." << std::endl;
  }
  return 0;
}
