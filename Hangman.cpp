//A hangman game, written in C++.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "hangman.txt"
using namespace std;
int main(){
  //generate a random word from the "hangman.txt" file
  //note: all word from the text file will contain only lowercase letters
  string word;
  //the number of tries the player has
  int tries = 0;
  char letter;
  //prompt the player for a letter
  cout << "Choose a letter: ";
  cin >> letter;
  
  return 0;
}
