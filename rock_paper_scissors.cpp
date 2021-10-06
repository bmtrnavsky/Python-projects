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
 
int computer = rand() % 3 + 1;
 
int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n\n";

std::cout << "Hello, and welcome to Rock, Paper, Scissors!\n\nRules of the game are: \n\n1) Rock beats scissors\n2) Scissors beats paper\n3) Paper beats rock.\n\n";

std::cout << "Lets begein!\n\n";
 
std::cout << "1) Rock ✊\n";
std::cout << "2) Paper ✋\n";
std::cout << "3) Scissors ✌️\n";
 
std::cout << "shoot! ";

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
      break;

  case 2:
    if (user == 1)
     std::cout << "\nYou picked rock, the computer picked paper. You lose.\n";
     else if (user == 2)
     std::cout << "\nYou picked paper, the computer picked paper. Its a tie.\n";
     else if (user == 3)
     std::cout << "\nYou picked scissors, the computer picked paper. You win!\n";
     break;

  case 3:
    if (user == 1)
     std::cout << "\nYou picked rock, the computer picked scissors. You win!.\n";
     else if (user == 2)
     std::cout << "\nYou picked paper, the computer picked scissors. You lose.\n";
     else if (user == 3)
     std::cout << "\nYou picked scissors, the computer picked scissors. Its a tie.\n";
     break;

  default :
    std::cout << "\ninvalid choice. Please choose a number between 1 and 3.\n";
    }

}
