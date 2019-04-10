#include <iostream>
#include "../HighscoreLib/hsLib.h"
#include <string>
using namespace std;

void ShowScores(Highscores scores)
{
	for (int i = 0; i < TOP; i++)
	{
		cout << scores.highscores[i].nombre.c_str() << " - " << scores.highscores[i].score << endl;
	}
}

void main()
{
	Highscores highscoreExample; //You can store 10 values max, you can modify this value by changing the TOP number and recompiling the library file 

	
	//-.-.-.-.-.-.-.-.-.-.-InitiateScores EXAMPLE-.-.-.-.-.-.-.-.-.-.-

	InitiateScores(highscoreExample);
	
	ShowScores(highscoreExample);
	
	/*
	//-.-.-.-.-.-.-.-.-.-.-AddScore and Sort EXAMPLE-.-.-.-.-.-.-.-.-.-.-

	int pos = 4;
	string name = "Pancracio";
	int points = 230;

	InitiateScores(highscoreExample);
	AddScore(highscoreExample, points, name, pos);
	AddScore(highscoreExample, 340, "Ruben", 0);
	// AddScore(highscoreExample, 12, "Zoe", 4); // WARNING!!!! if the position is a value that you already use you will delete the previous value stored.
	Sort(highscoreExample); //Arranges the values added from from highest to lowest
	ShowScores(highscoreExample);
	*/

	cin.get();
}