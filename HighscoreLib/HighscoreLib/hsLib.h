#pragma once
#include <string>
#define TOP 10

struct Scores
{
	int score;
	std::string nombre;
};
struct Highscores
{
	Scores highscores[TOP];
};
void InitiateScores(Highscores& scores);
void AddScore(Highscores& score, int points, std::string name, int position);
void Sort(Highscores& scores);

