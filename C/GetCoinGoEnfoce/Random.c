#include "Random.h"

void D_CreateRandomSeed()
{
	srand((unsigned int)time(NULL) * 1000 + clock());
}

int D_ReturnPosX()
{
	return rand() % 15 + 3;//2~15
}

int D_ReturnPosY()
{
	return rand() % 15 + 3;//2~15
}

int D_CreateItem_X()
{
	return rand() % 13 + 4;
}

int D_CreateItem_Y()
{
	return rand() % 13 + 4;
}

int E_ReturnRandomValue()
{
	// srand((unsigned int)time(NULL) * 1000 + clock());
	return (rand() % 100 + 1);
}

bool E_CheckRandomFunc(int percent)
{
	int randValue = E_ReturnRandomValue();

	if (randValue <= percent) {
		return true;
	}
	else {
		return false;
	}
}

int Q_count()
{
	 // 1~3°³¸¸
	return rand() % 3 + 1;
}
