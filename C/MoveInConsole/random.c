#include "random.h"

void CreateRandomSeed()
{
	//srand(time(NULL) * 1000 + click());
	srand((unsigned int)time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	// 2~16, 2n
	// 1. 랜덤한 숫자를 뽑는다 - rand() A범위 B범위
	int randValue = rand() % 16+1; // 2~16

	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY()
{
	// 1~9, 1n
	int randValue = rand() % 9 + 1;

	return randValue;
}

/*
	좋은 코드
	1. 개발자가 보기에 좋은 것
	2. 메모리 최적화
*/