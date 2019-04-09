#include <iostream>
#include "hsLib.h"
using namespace std;

void AddScore(Scores score, Scores scores[])
{
	
}

void Sort(Scores scores[], const int largo)
{
	int aux;
	for (int i = 0; i < largo ; i++)
	{
		for (int j = 0; j < largo-1; j++)
		{
			if (scores[j].score<scores[j+1].score)
			{
				aux = scores[j].score;
				scores[j].score = scores[j + 1].score;
				scores[j + 1].score = aux;
			}
		}
	}
}


