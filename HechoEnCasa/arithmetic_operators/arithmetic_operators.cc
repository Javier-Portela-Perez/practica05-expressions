/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file arithmetic_operators.cc
  * @author Javier Portela Portela Pérez/alu0101569741@ull.edu.es
  * @date Oct 30 2022
  * @brief este programa es una calculadora 
  */

#include <iostream>
int main() {
  std::cout << "Este programa sirve como calculadora, introduzca dos números. " << std::endl;
  int numero_1, numero_2;
  std::cin >> numero_1 >> numero_2;
  std::cout << "La suma de los números es A+B=" << numero_1 + numero_2 << "." << std::endl;
  std::cout << "La diferencia de los números es A-B=" << numero_1 - numero_2 << "." << std::endl;
  std::cout << "El producto de los números es A*B=" << numero_1 * numero_2 << "." << std::endl;
  std::cout << "La división de los números es A/B tiene de cociente " << numero_1 / numero_2 << " y de resto " << numero_1 % numero_2  << std::endl;
  std::cout << "La división de los números es B/A tiene de cociente " << numero_2 / numero_1 << " y de resto " << numero_2 % numero_1  << std::endl;
  if (numero_1 < numero_2){
    std::cout << "A<B" << std::endl;
  }
  if (numero_1 > numero_2){
    std::cout << "A>B" << std::endl;
  }
  if (numero_1 == numero_2) {
    std::cout << "A=B" << std::endl;
  }
return 0;
}
