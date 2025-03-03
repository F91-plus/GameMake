#include "CurrentMonsy.h"

bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
}

bool UseMoney(int price)
{
	if (IsEnoughMoney(price)) {
		CurrentMoney -= price;
		printf("현재 남은 금액 : %d\n", CurrentMoney);
		//ShowInfo();
		return true;
	}
	else
	{
		printf("부족함\n");
		return false;
	}
}
