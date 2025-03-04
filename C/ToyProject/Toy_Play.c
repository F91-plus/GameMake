#include "Toy_Play.h"

// ���ӿ� �ʿ��� ���� ������
int CurrentLevel = 0;
int MissionLevel = 10;
int Coin = 15;
int W_AP = 1;

bool MissionCheck = false;
bool CoinCheck = false;

//���ǿ� ��
int CuttrentMoney = 10000;
int UpgradeCost = 500;
bool isFail = false;

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();
}

void ShowTitle()
{
	printf("============================\n");
	printf("Now Loading...\n");
	printf("============================\n");

	printf("���� ��ȭ\n");
}

void ShowManual()
{
	//1. ���� ���
	printf("���� ���\n");
	printf("Ű���� �Է� �� ����Ű�� ������ ����\n");
	printf("�Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ϰ� �˴ϴ�.\n\n");

	//2. ���� ��ǥ
	printf("Mission : ���ѵ� �������� ���� 10�� �����\n\n");
	
	//3. ���� ���
	printf("���̵�\n");
	printf("Level 1 : ��ȭ ���� �϶�\n");
	printf("Level 2 : ��ȭ ���� �ı�\n\n");
}

void GameLogic()	// enfoce.h
{
	while (true) {
		// �޴� ���� ȭ��

		// game clear or fail?
		if (Coin == 0) {
			if (ToyGameClear()) {
				MissionCheck = true;
				break;
			}
			else {
				CoinCheck = true;
				break;
			}
		}

		// �̼� ���� Ȯ��
		ShowMenu();	//enfoce.h

	}

	if (MissionCheck) {
		printf("Mission Clear\n");
		CurrentLevel = 0;
		Coin = 15;
		W_AP = 1;

		MissionCheck = false;
		CoinCheck = false;
	}
	else if (CoinCheck) {
		printf("Mission Fail\n");
		CurrentLevel = 0;
		Coin = 15;
		W_AP = 1;

		MissionCheck = false;
		CoinCheck = false;
	}
	
	printf("Thank you\n");
	
}
