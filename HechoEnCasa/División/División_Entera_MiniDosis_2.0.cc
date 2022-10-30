/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file División_Entera_Minidosis.cc
  * @author alu0101569741@ull.edu.es
  * @date Oct 30 2022
  * @brief El programa divide un número por otro menos 1             
  */



#include <iostream>
int main() {
  int Dividendo, DivisorMenosUno;
  std::cout << "este programa te divide un número por otro menos tres, dime tus números" << std::endl;
  std::cin >> Dividendo >> DivisorMenosUno;
  std::cout << "Tu cociente es " << Dividendo / (DivisorMenosUno - 1) << " y tu resto "<< Dividendo % (DivisorMenosUno - 1) << std::endl;
  return 0;
}
