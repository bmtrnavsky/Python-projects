#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  
  while (i < 25000) {
    square = i * i;
    std::cout << i << " " << square << "\n";

    i++;
  }

}
