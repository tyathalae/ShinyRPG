#pragma once
#include <string>
#include <iostream>

class Character
{
public:
	Character();
	~Character();

	std::string Name;
	int Level = 1;
	int Strength = 2;
	int Endurance = 2;
	int Intelligence = 2;
	int Agility = 2;
	int Luck = 2;

	double HP;
	double Attack;
	double Defence;

	double GetHP()
	{
		HP = 100 + (Level * 10) + (Endurance * 5);
		return HP;
	}

	double GetAttack()
	{
		Attack = 1 + (Level * 2) + (Strength * 2) + (Intelligence * 2);
		return Attack;
	}

	double GetDefence()
	{
		Defence = 2 + (Level * 1) + (Agility * 1) + (Endurance * 2);
		return Defence;
	}

	void ShowStats()
	{
		std::cout << "1- Strength: " << Strength << std::endl;
		std::cout << "2- Endurance: " << Endurance << std::endl;
		std::cout << "3- Intelligence: " << Intelligence << std::endl;
		std::cout << "4- Agility: " << Agility << std::endl;
		std::cout << "5- Luck: " << Luck << std::endl;
	}
};

