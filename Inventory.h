#pragma once

#include "Item.h"

class Inventory
{
private:

	static const int	INVENTORY_MAX = 50;
	int					_PGold; //Player Gold
	int					_ItemCount;
	Item<int>			_PItem[INVENTORY_MAX]; //number of player Item

public:

	void ShowInfo() const
	{
		std::cout << "you have " << _PGold << "Gold" << std::endl;
		for (auto& ele : _PItem)
		{
			std::cout << _PItem << "\t";
		}
		std::cout <<std::endl;
	}



};

