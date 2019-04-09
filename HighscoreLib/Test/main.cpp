#include <iostream>
#include "../HighscoreLib/hsLib.h"
#include <ctime>
#include <string.h>
#include <sstream>
using namespace std;

void ShowScores(Scores scores[], const int largo)
{
	for (int i = 0; i < largo; i++)
	{
		cout << i + 1 << "-" << scores[i].nombre.c_str() << " - " << scores[i].score << endl;
	}
}

void main()
{
	ostringstream ej;
	srand(time(0));
	const int largo = 10;
	int aux = 0;
	Scores scores[largo];
	for (int i = 0; i < largo; i++)
	{
		scores[i].score = rand()%100;
		scores[i].nombre = "Ruben";
	}
	Sort(scores,largo);
	ShowScores(scores, largo);

	cin.get();
}