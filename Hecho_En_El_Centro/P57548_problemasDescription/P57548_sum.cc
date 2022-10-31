/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P57548_sum.cc
  * @author Javier Portela Pérez alu0101569741@ull.edu.es
  * @date Oct 31 2022
  * @brief El programa lee dos numerros y calcula su suma 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57548_en
  */

#include <iostream>
  
int main() {
 // std::cout << "Este programa lee dos números e imprime su suma." << std::endl;
 // std::cout << "Indique aquí sus dos números." << std::endl;
  double primer_numero_a_sumar, segundo_numero_a_sumar; 
  std::cin >> primer_numero_a_sumar >> segundo_numero_a_sumar;
  std::cout << primer_numero_a_sumar + segundo_numero_a_sumar << std::endl;
    
return 0;  
}
