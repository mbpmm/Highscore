#include <iostream>
#include "hsLib.h"

void InitiateScores(Highscores& scores)
{
	for (int i = 0; i < TOP; i++)
	{
		scores.highscores[i].nombre = "ABC";
		scores.highscores[i].score = 0;
	}
}

void AddScore(Highscores& score, int points, std::string name, int position)
{
	score.highscores[position].score = points;
	score.highscores[position].nombre = name;
}

void Sort(Highscores& scores)
{
	int auxScore;
	std::string auxName;

	for (int i = 0; i < TOP ; i++)
	{
		for (int j = 0; j < TOP-1; j++)
		{
			if (scores.highscores[j].score<scores.highscores[j+1].score)
			{
				auxScore = scores.highscores[j].score;
				scores.highscores[j].score = scores.highscores[j + 1].score;
				scores.highscores[j + 1].score = auxScore;
				auxName = scores.highscores[j].nombre;
				scores.highscores[j].nombre = scores.highscores[j + 1].nombre;
				scores.highscores[j + 1].nombre = auxName;
			}
		}
	}
}


