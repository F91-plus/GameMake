#include "Toy_Enforce.h"

void ShowMenu()
{
	printf("1 start enfoce\n");
	printf("2 now state check\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1) {
		//enfoce
		Upgrade();
	}
	else if (inputNumber == 2) {
		// state check
	}
	else {
		// not correct
		printf("���Է� �ʿ�");
	}

	// �̼� ���� Ȯ��
	if (ToyGameClear(true)) {
		printf("game clear\n");
	}
	else if(ToyGameClear(false))
	{
		//������ Ȯ��, ��ȭ ���� Ȯ��
		printf("��� ����");
	}
	else {
		printf("Mission fail\n");
	}


	printf("��� ���� �ҷ��� �ƹ� Ű�� �Է���\n");
	_getch();
	system("cls");
}

void Upgrade()
{
	CurrentLevel++;
	//printf("%d\n", CurrentLevel);
}

void ShowStatus()
{
}

// ���� ���� ���� == �ִ� ���� -> �̼� ����
bool ToyGameClear()
{
	return CurrentLevel == MissionLevel ? true : false;
}
