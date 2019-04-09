#include <iostream>
#include "../HighscoreLib/hsLib.h"


int main()
{
	const int largo = 10;
	int scores[largo];
	for (int i = 0; i < largo; i++)
	{
		scores[largo] = i;
	}
	ShowScores(scores, largo);
	return 0;
}