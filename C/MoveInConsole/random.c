#include "random.h"

void CreateRandomSeed()
{
	//srand(time(NULL) * 1000 + click());
	srand((unsigned int)time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	// 2~16, 2n
	// 1. ������ ���ڸ� �̴´� - rand() A���� B����
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
	���� �ڵ�
	1. �����ڰ� ���⿡ ���� ��
	2. �޸� ����ȭ
*/