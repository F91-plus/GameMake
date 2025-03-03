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
		printf("재입력 필요");
	}

	// 미션 여부 확인
	if (ToyGameClear(true)) {
		printf("game clear\n");
	}
	else if(ToyGameClear(false))
	{
		//소지금 확인, 강화 레벨 확인
		printf("계속 진행");
	}
	else {
		printf("Mission fail\n");
	}


	printf("계속 진행 할려면 아무 키를 입력해\n");
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

// 현재 무기 레벨 == 최대 레벨 -> 미션 성공
bool ToyGameClear()
{
	return CurrentLevel == MissionLevel ? true : false;
}
