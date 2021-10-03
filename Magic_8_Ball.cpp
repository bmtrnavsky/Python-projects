#include <iostream>
#include <cstdlib>

int main() {

  // Your future is here
  std::cout << "MAGIC 8-BALL: \n";

  srand(time(NULL));
  int answer = std::rand() % 10;

  //std::cout << answer;

  if (answer == 0) {
    std::cout << "It is certain.\n";
  }
  else if (answer == 1) {
    std::cout << "Without a doubt.\n";
  }
  else if (answer == 2) {
    std::cout << "As I see it, yes.\n";
  }
  else if (answer == 3) {
    std::cout << "Most likley.\n";
  }
  else if (answer == 4) {
    std::cout << "Outlook good\n";
  }
  else if (answer == 5) {
    std::cout << ("Yes.\n");
  }
  else if (answer == 6) {
    std::cout << "Ask again later.\n";
  }
  else if (answer == 7) {
    std::cout << "Don't count on it.\n";
  }
  else if (answer == 8) {
    std::cout << "My reply is no.\n";
  }
  else if (answer == 8) {
    std::cout << "Outlook not so good.\n";
  }
  else {
    std::cout << "Very doubtfull.\n";
  }

}
