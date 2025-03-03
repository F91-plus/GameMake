#include "Toy_Play.h"

// ���ӿ� �ʿ��� ���� ������
int CurrentLevel = 0;
int MissionLevel = 10;
bool MissionCheck = false;
bool MoneyCheck = true;

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
	printf("Tutorial skip\n");

	printf("�� ���� ��ȭ\n");
}

void ShowManual()
{
	//1. ���� ���
	printf("���� ���\n");
	printf("Ű���� �Է� �� ����Ű�� ������ ����\n");
	printf("�Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ϰ� �˴ϴ�.\n\n");

	//2. ���� ��ǥ
	printf("Mission : ���� 10�� �����\n\n");
	
	//3. ���� ���
	printf("���̵�\n");
	printf("Level 1 : ��ȭ ���� �϶�\n");
	printf("Level 2 : ��ȭ ���� �ı�\n\n");
}

void GameLogic()	// enfoce.h
{
	while (true) {
		// �޴� ���� ȭ��
		ShowMenu();	//enfoce.h

		// game clear or fail?
		if (MissionCheck || MoneyCheck) {
			break;
		}
	}
	if (MissionCheck) {
		printf("Mission Clear\n");
	}
	if (MoneyCheck) {
		printf("Mission Fail\n");
	}
}
