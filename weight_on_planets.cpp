#include <iostream>

int main() {
  
  double weight_on_earth;
  int p;
  double weight;
 std::cout << "What is your weight on earth?\n";
 std::cin >> weight_on_earth;
 std::cout << "What planet are you fighting on?\n";
 std::cout << "Enter 1 for Mercury, 2 for Venus, \n3 for Mars, 4 for Jupiter, 5 for Saturn, \n6 for Uranus, or 7 for Neptune\n";
 std::cin >> p;

switch (p) {
  case 1:
    weight = weight_on_earth * 0.38;
    std::cout << "Your weight on Mervury is " << weight << " pounds\n";
    break;
  case 2:
    weight = weight_on_earth * 0.91;
    std::cout << "Your weight on Venus is " << weight << " pounds\n";
    break;
  case 3:
    weight = weight_on_earth * 0.38;
    std::cout << "Your weight on Mars is " << weight << " pounds\n";
    break;
  case 4:
    weight = weight_on_earth * 2.34;
    std::cout << "Your weight on Jupiter is " << weight << " pounds\n";
    break;
    case 5:
    weight = weight_on_earth * 1.06;
    std::cout << "Your weight on Saturn is " << weight << " pounds\n";
    break;
  case 6:
    weight = weight_on_earth * 0.92;
    std::cout << "Your weight on Uranus is " << weight << " pounds\n";
    break;
  case 7:
    weight = weight_on_earth * 1.19;
    std::cout << "Your weight on Neptune is " << weight << " pounds\n";
    break;
  default:
    std::cout << "Invalid planet entry. Please pick a number between 1 and 7\n";
    break;
}
  
}
