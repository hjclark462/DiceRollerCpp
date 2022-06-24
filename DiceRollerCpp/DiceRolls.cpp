#include "DiceRolls.h"
#include<ctime>
using namespace std;
using namespace DiceRolls;

int RollDice(int diceQuant, int diceType)
{
	srand(time(NULL));
	int total = rand() % diceType + 1;
	diceQuant--;
	while (diceQuant > 0)
	{
		srand(time(NULL));
		total += rand() % diceType + 1;
		diceQuant--;
	}
	return total;	
}
