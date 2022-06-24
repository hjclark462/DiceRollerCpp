#pragma once
#include <functional>
namespace DiceRolls
{
	typedef std::function<int(int, int)>DiceRoller;
	int RollDice(int diceQuant, int diceType);
	static DiceRoller defult = RollDice;
}