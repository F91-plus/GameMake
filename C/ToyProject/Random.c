#include "Random.h"

// 1~100�� ������ ��ȯ�Ѵ�.
int ReutrnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());
	// time(NULL) �� �� ��� ������ �ӵ��� ���� ��� ���� ��ġ�� ����



	return (rand() % 100+1);
	//int randomValue = (rand() % 100+1);
	//return randomValue;
}

bool CheckRandomFunc(int percent)
{
	int randValue = ReutrnRandomValue(); // 1~100���� ��ȯ

	//Ȯ�� 70%
	//int SuccessPercent = randValue;
	if (randValue <= percent) {
		printf("���� %d\n", randValue);
		return true;
	}
	else
	{
		printf("���� %d\n", randValue);
		return false;
	}
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)time(NULL) * 1000 + clock());

	return (rand() % (max - min + 1)) + min;
}
