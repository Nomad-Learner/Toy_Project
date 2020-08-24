#pragma once

#include"Inventory.h"
#include<string>
#include<iostream>

class Player
{
private:

	std::string _Name;
	int			_Hp;
	int			_HpMax;
	int			_Mp; //현재 MP 상황
	int			_MpMax; //꽉 차있는 MP 상황
	int			_Level;
	int			_STR; //힘 스텟
	int			_DEX; //민첩 스텟
	int			_INT; //지능 스텟
	int			_LUK; // 럭 스텟
	int			_Physical_AttackMin; //최소 공격력, 최대 공격력 모두 따져주고
	int			_Physical_AttackMax;
	int			_Magical_AttackMin;
	int			_Magical_AttackMax;
	double		_Physical_Defense_Rate;
	double		_Magical_Defense_Rate;
	int			_Exp;
	int			_ExpMax;
	Inventory	_Invetory;

public:










};

