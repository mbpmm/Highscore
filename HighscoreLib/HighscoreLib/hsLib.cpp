#include <iostream>
using namespace std;

void ShowScores(int scores[], const int largoArray)
{
	for (int i = 0; i < largoArray; i++)
	{
		cout << i << " - " << scores[i]<<endl;
	}
}
