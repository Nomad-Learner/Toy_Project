#pragma once

#include<array>
#include<iostream>
#include<vector>

template<typename T>
class Item
{
private:
	
	std::vector<T> iarr; //���� ��ü�� �ڱ� ������ ������ ���� ���� ��

public:
	
	Item(int len);

	T& operator [] (int idx);
	T operator [] (int idx) const;
	int GetArrLen() const;
	~Item() {};

};

template<typename T>
Item<T>::Item(int len)
{
	iarr.resize(len); //�迭 ���̸̹� Ȯ���ϱ�
}

template<typename T>
T& Item<T>::operator [] (int idx)
{
	if (idx < 0 || idx >= iarr.size())
	{
		std::cout << "Resize the vecotr" << std::endl;
		iarr.resize(idx);
	}

	return iarr[idx];
}

template<typename T>
T Item<T>::operator [] (int idx) const
{
	if (idx < 0 || idx >= iarr.size())
	{
		std::cout << "Resize the vecotr" << std::endl;
		iarr.resize(idx);
	}

	return iarr[idx];

}

template<typename T>
int Item<T>::GetArrLen() const
{
	return  iarr.size();

}
