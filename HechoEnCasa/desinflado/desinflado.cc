/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file desinflado.cc
  * @author alu0101569741@ull.edu.es
  * @date Oct 30 2022
  * @brief Este programa toma un caracter en minúscula y lo convierte en mayúscula 
  */

#include <iostream>
int main() {
  std::cout << "este programa cambia una mayúscula por una miníscula" << std::endl << "ponga su letra mayúscula del abecedario inglés" << std::endl;
  char letraMayuscula;
  std::cin >> letraMayuscula;
  int mayuscula = int(letraMayuscula);
  mayuscula = mayuscula + 32;
  std::cout <<  char(mayuscula) << std::endl;
  return 0;
}
