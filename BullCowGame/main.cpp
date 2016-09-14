#include <iostream>
#include <string>
//#include "main.h"
using namespace std;

void PrintIntro();

void PlayGame();

string GetGuess();

bool AskToPlayAgain();

int main(){
	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);

	return 0;
}

void PlayGame()
{
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++) {
		string Guess = GetGuess();

		// repeat the guess back to them
		cout << "The guess is: " << Guess << endl;
	}
}

// introduce the game
void PrintIntro() {

	constexpr int WORLD_LENGTH = 9;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";

	return;
}

// get a guess from the player
string GetGuess() {

	cout << "Please guess the word: ";
	string Guess = "";
	getline(cin, Guess);

	return Guess;
}

bool AskToPlayAgain(){

	cout << "Do you wana play again? ";
	string Response = "";
	getline(cin, Response);

	return (Response[0] == 'y' || Response[0] == 'Y');
}

