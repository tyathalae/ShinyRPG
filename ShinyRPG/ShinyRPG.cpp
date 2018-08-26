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

		std::cout << "1- Strength: " << newCharacter.Strength << std::endl;
		std::cout << "2- Endurance: " << newCharacter.Endurance << std::endl;
		std::cout << "3- Intelligence: " << newCharacter.Intelligence << std::endl;
		std::cout << "4- Agility: " << newCharacter.Agility << std::endl;
		std::cout << "5- Luck: " << newCharacter.Luck << std::endl;

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

