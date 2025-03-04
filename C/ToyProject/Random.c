#include "Random.h"

// 1~100의 정수를 반환한다.
int ReutrnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());
	// time(NULL) 뿐 일 경우 컴파일 속도가 빨라서 모두 같은 수치가 나옴



	return (rand() % 100+1);
	//int randomValue = (rand() % 100+1);
	//return randomValue;
}

bool CheckRandomFunc(int percent)
{
	int randValue = ReutrnRandomValue(); // 1~100랜덤 반환

	//확률 70%
	//int SuccessPercent = randValue;
	if (randValue <= percent) {
		printf("성공 %d\n", randValue);
		return true;
	}
	else
	{
		printf("실패 %d\n", randValue);
		return false;
	}
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)time(NULL) * 1000 + clock());

	return (rand() % (max - min + 1)) + min;
}
