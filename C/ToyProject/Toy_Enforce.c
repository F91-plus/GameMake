#include "Toy_Enforce.h"

void ShowMenu()
{
	printf("Coin : %d\n", Coin);
	printf("1 start enfoce (Use : 1 Coin, ����Ȯ�� : 85%)\n");
	printf("2 now state check\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1 && Coin > 0) {
		//enfoce

		/*
			���ǿ�
			if (CanUpgrade(UpgradeCost)) {
				if (CheckRandomFunc(85)) {
				Upgrade();
			}
			else
			{
				printf("��ȭ ����!!!!!!!!!!!!!\n");
			}
		*/

		//int random = ReutrnRandomValue();
		//printf("random : %d", random);

		if (CheckRandomFunc(85)) {
			Upgrade();
		}
		else
		{
			printf("��ȭ ����!!!!!!!!!!!!!\n");
		}

	}
	else if (inputNumber == 2) {
		// state check
		ShowStatus();
	}
	else {
		// not correct
		printf("���Է� �ʿ�\n");
	}

	printf("��� ���� �ҷ��� �ƹ� Ű�� �Է���\n");
	_getch();
	system("cls");
}

void Upgrade()
{
	Coin--;
	CurrentLevel++;
	W_AP = W_AP + CurrentLevel;

	printf("Coin 1 �Ҹ�!\n");
	printf("��ȭ ����!!\n��� : +%d ��������", CurrentLevel);
}

void ShowStatus()
{
	printf("+%d ��������\n���ݷ� : %d\n���� : 0\n", CurrentLevel, W_AP);
}

// ���� ���� ���� == �ִ� ���� -> �̼� ����
bool ToyGameClear()
{
	return CurrentLevel >= MissionLevel ? true : false;
}
