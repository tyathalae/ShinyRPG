// ShinyRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Character.h"
#include <iostream>

Character CreateCharacter()
{
	Character newCharacter;
	std::cout << "Please enter character name: \n";
	std::cin >> newCharacter.Name;

	int remainingStats = 5;
	while (remainingStats > 0)
	{
		std::cout << "You have " << remainingStats << " stat points remaining \n";

		newCharacter.ShowStats();

		int answer = 0;
		std::cin >> answer;

		if (answer == 1)
		{
			newCharacter.Strength++;
			remainingStats--;
		}
		else if (answer == 2)
		{
			newCharacter.Endurance++;
			remainingStats--;
		}
		else if (answer == 3)
		{
			newCharacter.Intelligence++;
			remainingStats--;
		}
		else if (answer == 4)
		{
			newCharacter.Agility++;
			remainingStats--;
		}
		else if (answer == 5)
		{
			newCharacter.Luck++;
			remainingStats--;
		}
		else
		{
			std::cout << "Wrong input, retry!\n";
		}
	}

	std::cout << "----- Character creation is completed! ----- \n";
	newCharacter.ShowStats();

	return newCharacter;
}

int main()
{
	Character player;
	Character enemy;

	player = CreateCharacter();

	int a;
	std::cin >> a;
    return 0;
}

