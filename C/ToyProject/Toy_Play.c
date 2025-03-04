#include "Toy_Play.h"

// 게임에 필요한 전역 변수들
int CurrentLevel = 0;
int MissionLevel = 10;
int Coin = 15;
int W_AP = 1;

bool MissionCheck = false;
bool CoinCheck = false;

//강의용 돈
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

	printf("무기 강화\n");
}

void ShowManual()
{
	//1. 조작 방법
	printf("조작 방법\n");
	printf("키보드 입력 및 엔터키를 눌러서 선택\n");
	printf("입력 조건 이외의 키를 입력할 시에 재선택을 하게 됩니다.\n\n");

	//2. 게임 목표
	printf("Mission : 제한된 코인으로 무기 10강 만들기\n\n");
	
	//3. 방해 요소
	printf("난이도\n");
	printf("Level 1 : 강화 레벨 하락\n");
	printf("Level 2 : 강화 무기 파괴\n\n");
}

void GameLogic()	// enfoce.h
{
	while (true) {
		// 메뉴 선택 화면

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

		// 미션 여부 확인
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
