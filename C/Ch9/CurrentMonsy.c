#include "CurrentMonsy.h"

bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
}

bool UseMoney(int price)
{
	if (IsEnoughMoney(price)) {
		CurrentMoney -= price;
		printf("���� ���� �ݾ� : %d\n", CurrentMoney);
		//ShowInfo();
		return true;
	}
	else
	{
		printf("������\n");
		return false;
	}
}
