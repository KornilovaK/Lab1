#include <iostream>
#include "utils.h"

int main() {
  int num1 = 10;
  int num2 = 5;

  int sum = add(num1, num2);
  int difference = subtract(num1, num2);
  int product = multiply(num1, num2);

  std::cout << "Сумма: " << sum << std::endl;
  std::cout << "Разность: " << difference << std::endl;
  std::cout << "Произведение: " << product << std::endl;
}