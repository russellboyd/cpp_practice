#include <iostream>
#include <random>
using namespace std;

int main()
{
  //declare variables
  string userin;
  vector<string> choices = {"rock", "paper", "scissors"};
  default_random_engine generator;
  uniform_int_distribution<int> distribution(0,2);
  int dice_roll = distribution(generator); // generates a number in the range of 1 and 3
  
  //get input from the user
  cout << "Please enter either rock, paper or scissors.\n";
  cin >> userin;
  cout << dice_roll << "\n";
  //compare userinput to random input
  switch(dice_roll)
    {
    case 0:
      if(userin == "rock")
	{
	  cout << "You chose rock and the computer chose rock. You tied.\n";
	}
      else if(userin == "paper")
	{
	  cout << "You chose paper and the computer chose rock. Paper covers rock so you win.\n";
	}
      else if(userin == "scissors")
	{
	  cout << "You chose scissors and the computer chose rock.  Rock crushes scissors so you lose.\n";
	}
      break;

    case 1:
      if(userin == "rock")
	{
	  cout << "You chose rock and the computer chose paper. Paper covers rock so you lose.\n";
	}
      else if(userin == "paper")
	{
	  cout << "You chose paper and the computer chose paper. You tied.\n";
	}
      else if(userin == "scissors")
	{
	  cout << "You chose scissors and the computer chose paper.  Scissors cuts paper so you win.\n";
	}
      break;

    case 2:
      if(userin == "rock")
	{
	  cout << "You chose rock and the computer chose scissors. Rock crushes scissors so you win.\n";
	}
      else if(userin == "paper")
	{
	  cout << "You chose paper and the computer chose scissors. Paper is cut by scissors so you lose.\n";
	}
      else if(userin == "scissors")
	{
	  cout << "You chose scissors and the computer chose scissors. You tied.\n";
	}
      
    default: cout << "That wasn't a valid choice.  Please try again.\n";
    }
}
