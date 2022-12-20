#include <iostream>

int main() {
  // currencies
  double pesos;
  double reais;
  double soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

/* Conversion rates:
1 peso == 0.051 USD
1 reais == 0.19 USD
1 sol == 0.26 USD */
dollars = (0.051 * pesos) + (0.19 * reais) + (0.26 * soles);
std::cout << "Total amount of US Dollars: $ " << dollars << "\n";
}
