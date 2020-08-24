#include"Green_Snail.h"
#include"Armor.h"
#include"Weapon.h"
#include"Potion.h"
#include"Item.h"


int main()
{
	using namespace std;
	const int Weapon_Number = 5;
	const int Armor_Number = 5;
	const int Potion_Number = 2;

	//Green_Snail snail;
	//snail.ShowInfo();



	/*************Weapon ��ü ����********************/ 
	Item<Weapon> weaponArr(Weapon_Number); //�⺻ �����ڰ� ��� �׷��ſ���
	//���� �־��ش�. ���� �μ��� 9����
	weaponArr[0] = Weapon("�ʺ������� ��", 1000, 10, 35, 0, 0,0, 10, 30);
	weaponArr[1] = Weapon("�۶��콺", 2000, 20, 65, 0, 0, 0,15, 47);
	weaponArr[2] = Weapon("�Ϸ�", 3000, 25, 80, 0, 0,0, 25, 42);
	weaponArr[3] = Weapon("������ ���", 4000, 30, 0, 0, 0,0, 30, 45);
	weaponArr[4] = Weapon("ĿƲ����", 5000, 35, 110, 0, 0, 0,30, 70);

	/************************Armor ��ü ����**********************/

	Item<Armor> armorArr(Armor_Number);
	armorArr[0] = Armor("�簢���� ����", 100, 5, 0, 0, 0, 0, 5);
	armorArr[1] = Armor("���� �Ѳ�", 200, 10, 0, 0, 0, 0, 10);
	armorArr[2] = Armor("��ö����", 300, 15, 40, 0, 0, 0, 15);
	armorArr[3] = Armor("�̽��� ��Ŭ��", 400, 20, 55, 0, 0, 0, 20);
	armorArr[4] = Armor("���� �ﰢ ����", 500, 25, 70, 0, 0, 0, 25);

	/************************Potion ��ü ����**********************/
	Item<Potion> potionArr(Potion_Number);
	potionArr[0] = Potion("ü�� ����", 300, 0, 1);
	potionArr[1] = Potion("���� ����", 0, 300, 1);

	//for (auto& ele : weaponArr)
	//{

	//} �� ��� �ô��� ������ ����� �ȳ���

	for (int i = 0; i < Weapon_Number; i++)
	{
		cout << weaponArr[i] << endl;
	}


	for (int i = 0; i < Armor_Number; i++)
	{
		cout << armorArr[i] << endl;
	}

	for (int i = 0; i < Potion_Number; i++)
	{
		cout << potionArr[i] << endl;
	}

	return 0;
}