#include <iostream>
#include <stdlib.h>
 
int main() {
  /* this program will play a more complex version of Rock, Paper, Scissors where it is harder to guess the opponents actions. 

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors. */
 
  // Live long and prosper
 
srand (time(NULL));
 
int computer = rand() % 5 + 1;
 
int user = 0;

std::cout << "=================================\n";
std::cout << "Rock Paper Scissors Lizard Spock!\n";
std::cout << "=================================\n\n";

std::cout << "Hello, and welcome to Rock, Paper, Scissors, Lizard, Spock!\n\nRules of the game are: \n\n1)  Scissors cut paper\n2)  Paper covers rock.\n3)  Rock crushes lizard\n4)  lizard poisions Spock\n5)  Spock smashes scissors\n6)  Scissors decapitate lizard\n7)  Lizard eats paper\n8)  Paper disproves Spock\n9)  Spock vaporizes rock\n10) (and as it always has)Rock crushes scissors\n\n";

std::cout << "Lets begein!\n\n";
 
std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors\n";
std::cout << "4) Lizard\n";
std::cout << "5) Spock\n";
 
std::cout << "1 - 2 - 3 - shoot! ";

std::cin >> user;

switch (computer)
{

  case 1: 
    if (user == 1)
    std::cout << "\nYou picked rock and so did the computer. It's a tie.\n";
      else if (user == 2)
      std::cout << "\nYou picked paper, the computer picked rock! You win!\n";
      else if (user == 3)
      std::cout << "\nYou picked scissors, the computer picked rock. You lose.\n";
      else if (user == 4)
      std::cout << "\nYou picked lizard, the computer picked rock. You lose.\n";
      else if (user == 5)
      std::cout << "\nYou picked Spock, the computer picked rock. You win!.\n";
      break;

  case 2:
    if (user == 1)
     std::cout << "\nYou picked rock, the computer picked paper. You lose.\n";
     else if (user == 2)
     std::cout << "\nYou picked paper, the computer picked paper. Its a tie.\n";
     else if (user == 3)
     std::cout << "\nYou picked scissors, the computer picked paper. You win!\n";
     else if (user == 4)
      std::cout << "\nYou picked lizard, the computer picked paper. You win.\n";
      else if (user == 5)
      std::cout << "\nYou picked Spock, the computer picked paper. You lose.\n";
     break;

  case 3:
    if (user == 1)
     std::cout << "\nYou picked rock, the computer picked scissors. You win!.\n";
     else if (user == 2)
     std::cout << "\nYou picked paper, the computer picked scissors. You lose.\n";
     else if (user == 3)
     std::cout << "\nYou picked scissors, the computer picked scissors. Its a tie.\n";
     else if (user == 4)
      std::cout << "\nYou picked lizard, the computer picked scissors. You lose.\n";
      else if (user == 5)
      std::cout << "\nYou picked Spock, the computer picked scissors. You win!.\n";
     break;

case 4:
    if (user == 1)
     std::cout << "\nYou picked rock, the computer picked lizard. You win!.\n";
     else if (user == 2)
     std::cout << "\nYou picked paper, the computer picked lizard. You lose.\n";
     else if (user == 3)
     std::cout << "\nYou picked scissors, the computer picked lizard. You win!.\n";
     else if (user == 4)
      std::cout << "\nYou picked lizard, the computer picked lizard. Its a tie.\n";
      else if (user == 5)
      std::cout << "\nYou picked Spock, the computer picked lizard. You lose.\n";
     break;

case 5:
    if (user == 1)
     std::cout << "\nYou picked rock, the computer picked Spock. You lose.\n";
     else if (user == 2)
     std::cout << "\nYou picked paper, the computer picked Spock. You win!.\n";
     else if (user == 3)
     std::cout << "\nYou picked scissors, the computer picked Spock. You lose.\n";
     else if (user == 4)
      std::cout << "\nYou picked lizard, the computer picked spock. You win!.\n";
      else if (user == 3)
      std::cout << "\nYou picked Spock, the computer picked Spock. It's a tie.\n";
     break;

  default :
    std::cout << "\ninvalid choice. Please choose a number between 1 and 3.\n";
    }

}
