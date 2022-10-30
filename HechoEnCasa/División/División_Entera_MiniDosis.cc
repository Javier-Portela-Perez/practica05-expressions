/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file División_Entera_Minidosis.cc
  * @author alu0101569741@ull.edu.es
  * @date Oct 30 2022
  * @brief El programa divide un número por otro más 3             
  */



#include <iostream>
int main() {
  int Dividendo, DivisorMenosTres;
  std::cout << "este programa te divide un número por otro menos tres, dime tus números" << std::endl;
  std::cin >> Dividendo >> DivisorMenosTres;
  std::cout << "Tu cociente es " << Dividendo / (DivisorMenosTres + 3) << " y tu resto "<< Dividendo % (DivisorMenosTres + 3) << std::endl;
  return 0;
}
