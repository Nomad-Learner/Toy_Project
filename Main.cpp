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



	/*************Weapon 객체 저장********************/ 
	Item<Weapon> weaponArr(Weapon_Number); //기본 생성자가 없어서 그런거였군
	//값을 넣어준다. 여기 인수가 9개다
	weaponArr[0] = Weapon("초보전사의 검", 1000, 10, 35, 0, 0,0, 10, 30);
	weaponArr[1] = Weapon("글라디우스", 2000, 20, 65, 0, 0, 0,15, 47);
	weaponArr[2] = Weapon("일룬", 3000, 25, 80, 0, 0,0, 25, 42);
	weaponArr[3] = Weapon("메이플 우산", 4000, 30, 0, 0, 0,0, 30, 45);
	weaponArr[4] = Weapon("커틀러스", 5000, 35, 110, 0, 0, 0,30, 70);

	/************************Armor 객체 저장**********************/

	Item<Armor> armorArr(Armor_Number);
	armorArr[0] = Armor("사각나무 방패", 100, 5, 0, 0, 0, 0, 5);
	armorArr[1] = Armor("냄비 뚜껑", 200, 10, 0, 0, 0, 0, 10);
	armorArr[2] = Armor("강철방패", 300, 15, 40, 0, 0, 0, 15);
	armorArr[3] = Armor("미스릴 버클러", 400, 20, 55, 0, 0, 0, 20);
	armorArr[4] = Armor("빨간 삼각 방패", 500, 25, 70, 0, 0, 0, 25);

	/************************Potion 객체 저장**********************/
	Item<Potion> potionArr(Potion_Number);
	potionArr[0] = Potion("체력 포션", 300, 0, 1);
	potionArr[1] = Potion("마나 포션", 0, 300, 1);

	//for (auto& ele : weaponArr)
	//{

	//} 이 방법 봤던거 같은데 기억이 안나네

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