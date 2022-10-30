/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Javier_Portela_Pérez alu0101569741@ull.edu.es
  * @date Oct 30 2022
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  * the integer division d and the remainder r of a divided by b.
  * By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
int main() {
  std::cout << "The program reads two natural numbers a and b" << std::endl << "guive me your numbers" << std::endl;
  int dividend, divider;
  std::cin >> dividend >> divider;
  std::cout << "The integer division is ";
  std::cout << dividend / divider;
  std::cout << " and the reminder is";
  std::cout << " " <<dividend % divider << std::endl;
  return 0;
} 
