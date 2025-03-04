#include "Toy_Enforce.h"

void ShowMenu()
{
	printf("Coin : %d\n", Coin);
	printf("1 start enfoce (Use : 1 Coin, 성공확률 : 85%)\n");
	printf("2 now state check\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1 && Coin > 0) {
		//enfoce

		/*
			강의용
			if (CanUpgrade(UpgradeCost)) {
				if (CheckRandomFunc(85)) {
				Upgrade();
			}
			else
			{
				printf("강화 실패!!!!!!!!!!!!!\n");
			}
		*/

		//int random = ReutrnRandomValue();
		//printf("random : %d", random);

		if (CheckRandomFunc(85)) {
			Upgrade();
		}
		else
		{
			printf("강화 실패!!!!!!!!!!!!!\n");
		}

	}
	else if (inputNumber == 2) {
		// state check
		ShowStatus();
	}
	else {
		// not correct
		printf("재입력 필요\n");
	}

	printf("계속 진행 할려면 아무 키를 입력해\n");
	_getch();
	system("cls");
}

void Upgrade()
{
	Coin--;
	CurrentLevel++;
	W_AP = W_AP + CurrentLevel;

	printf("Coin 1 소모!\n");
	printf("강화 성공!!\n결과 : +%d 나뭇가지", CurrentLevel);
}

void ShowStatus()
{
	printf("+%d 나뭇가지\n공격력 : %d\n방어력 : 0\n", CurrentLevel, W_AP);
}

// 현재 무기 레벨 == 최대 레벨 -> 미션 성공
bool ToyGameClear()
{
	return CurrentLevel >= MissionLevel ? true : false;
}
