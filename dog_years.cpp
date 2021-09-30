#include <iostream>

int main() {

// This calculator calculates a dogs age in human age for dogs older than 2 years old.

 int dog_age = 7;
 int early_years = 21; //the first two years count as 21 years
 int later_years = (dog_age - 2)*4; // later years counts all years after the forst two as 4 human years.
 int human_years = early_years + later_years;

std::cout << "My name is Matti! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}
