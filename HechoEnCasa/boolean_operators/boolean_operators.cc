/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file boolean_operators.ccc
  * @author Javier Portela Pérez /alu0101569741@ull.edu.es
  * @date Oct 30 2022
  * @brief este programa muestra una tabla de verdad 
  */

#include <iostream>

int main() {

  std::cout << "este programa calcula la tabla de verdad de A y B" << std::endl;
  bool A, B;
  std::cout << "Introduzca los valores de A y B" << std::endl;
  std::cin >> A >> B;
  std::cout << " __A_B_!A_!B_A&&B_!A&&B_A&&!B_!A&&!B_A||B_!A||B_A||!B_!A||!B " << std::endl;
  std::cout << "   " << A << " " << B << "  " << ! A << "  " << ! B << "  " << (A && B) << "     " << (! A && B) << "    " << (A && ! B) << "      " << (! A && ! B) << "     " << (A || B) << "     " << (! A || B) << "    " << (A || ! B) << "      " << (! A || ! B) << std::endl;

  return 0;
}
