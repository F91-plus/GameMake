#include "Random.h"

void D_CreateRandomSeed()
{
	srand((unsigned int)time(NULL) * 1000 + clock());
}

int D_ReturnPosX()
{
	return 0;
}

int D_ReturnPosY()
{
	return 0;
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
