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
	int			_Mp; //���� MP ��Ȳ
	int			_MpMax; //�� ���ִ� MP ��Ȳ
	int			_Level;
	int			_STR; //�� ����
	int			_DEX; //��ø ����
	int			_INT; //���� ����
	int			_LUK; // �� ����
	int			_Physical_AttackMin; //�ּ� ���ݷ�, �ִ� ���ݷ� ��� �����ְ�
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

