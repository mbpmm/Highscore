#pragma once
#include <string.h>

struct Scores
{
	int score;
	std::string nombre;
};
void AddScore(Scores score, int scores[]);
void Sort(Scores scores[], const int largo);

