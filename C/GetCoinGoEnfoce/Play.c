#include "Play.h"

bool V_Enforce = false;
bool V_Quest = false;
bool V_Dungeon = false;

int q_count = 0;	// 퀘스트 수락 시 랜덤하게 목표 값이 생성
int q_clear = 0;	// 퀘스트 클리어 횟수
int q_item = 0;		// 던전에서 얻은 퀘스트 아이템

void L_GameLoop() {
	V_Enforce = false;	// 좌표도 조건이라 bool 설정 안해도 상관없을 듯?

	ShowLoading();
	ShowVillage();

	while (true) {
		if (_kbhit()) {
			I_setCursorPos(L_playerX, L_playerY);//2, 8
			printf("  ");

			if (GetAsyncKeyState(VK_UP) & 0x8000) {
				//위
				L_playerY -= 1;
				if (L_playerY <= 8) {
					L_playerY = 8;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
				//아래
				L_playerY += 1;
				if (L_playerY >= 16) {
					L_playerY = 16;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
				//좌
				L_playerX -= 1;
				if (L_playerX <= 0) {
					L_playerX = 1;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
				//우
				L_playerX += 1;
				if (L_playerX >= 17) {
					L_playerX = 16;
				}
			}
			else
			{
				// x,y 좌표가 그대로
			}
		}

		if (V_Quest) {
			I_setCursorPos(30, 13);
			printf("퀘스트 진행 중");//개수는 random
			I_setCursorPos(30, 14);
			printf("내용 %d개의 물건 수집하기", q_count);//개수는 random
			I_setCursorPos(30, 15);
			printf("현재 모은 개수 : %d개 ", q_item);
		}

		I_setCursorPos(30, 20);
		printf("소지금 정보");
		I_setCursorPos(30, 21);
		printf("Coin : %d, QuestCoin : %d", L_Coin, L_QuestCoin);
		I_setCursorPos(30, 22);
		printf("무기 정보 : [+%d] %s", W_level, "초보자의 검");
		
		I_setCursorPos(L_playerX, L_playerY);
		printf("□");

		Sleep(70);

		// Enfoce
		if (L_playerX == 1 && L_playerY == 16) {
			V_Enforce = true;
			break;
		}
		// Quest
		if (L_playerX == 16 && L_playerY == 8 && W_level >= 10) {
			break;
		}
		else if (L_playerX == 16 && L_playerY == 8) {
			L_playerX = 10, L_playerY = 8;
			I_setCursorPos(L_playerX, L_playerY);
			printf("□");

			Sleep(100);

			SetColor(0, 3);
			I_setCursorPos(16, 8);
			printf("Q");
			SetColor(0, 7);

			if (V_Quest) {
				ResetText();
				I_setCursorPos(30, 10);
				printf("이미 퀘스트가 진행 중 입니다.");
			}
			else
			{
				V_Quest = true;
				I_setCursorPos(30, 11);
				printf("퀘스트 수락!");

				Sleep(100);

				q_count = Q_count();
				I_setCursorPos(30, 13);
				printf("퀘스트 진행 중");//개수는 random
				I_setCursorPos(30, 14);
				printf("내용 %d개의 물건 수집하기", q_count);//개수는 random
				I_setCursorPos(30, 15);
				printf("현재 모은 개수 : %d개 ", q_item);
			}
		}

		if (q_item >= q_count && V_Quest == true) {
			I_setCursorPos(30, 13);
			printf("퀘스트 클리어");
			I_setCursorPos(30, 14);
			printf("                                  ");
			I_setCursorPos(30, 15);
			printf("                                  ");

			Sleep(100);

			q_item = 0;
			L_Coin += q_count;
			L_QuestCoin++;
			q_count = 0;
			V_Quest = false;
		}

		//Dungeon
		if (L_playerX == 16 && L_playerY == 12 && V_Quest == 1) {
			V_Dungeon = true;
			break;
		}
		else if(L_playerX == 16 && L_playerY == 12 && V_Quest == 0)
		{
			ResetText();
			I_setCursorPos(30, 12);
			printf("퀘스트 수락 필요!");

			L_playerX = 10, L_playerY = 12;
			I_setCursorPos(L_playerX, L_playerY);
			printf("□");

			Sleep(100);

			SetColor(0, 4);
			I_setCursorPos(16, 12);
			printf("D");
			SetColor(0, 7);
		}

		//clear check
	}
	if (W_level >= 10) {
		system("cls");
		printf("게임 클리어!!");

		V_Enforce = false;
		V_Quest = false;
		V_Dungeon = false;

		q_count = 0;
		q_clear = 0;
		q_item = 0;
		W_level = 0;

		L_Coin = 10;
		L_QuestCoin = 0;

		Sleep(1000);
		L_ShowGameMenu();
	}

	if (V_Enforce) {
		L_Enforce();
	}

	if (V_Dungeon) {
		int D_randomX = D_ReturnPosX();
		int D_randomY = D_ReturnPosY();
		D_Map(D_randomX, D_randomY);
		D_Play(D_randomX, D_randomY);
	}

}

void ShowVillage()
{
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("■■■■■■■■■■■■■■■■■■■\n");
	printf("■                 ■\n"); //공백 17
	printf("■                 ■\n");
	printf("■                 ■\n");
	printf("■                 ■\n");
	printf("■                 ■\n"); // 
	printf("■                 ■\n");
	printf("■                 ■\n");
	printf("■                 ■\n");
	printf("■                 ■\n");
	printf("■■■■■■■■■■■■■■■■■■■\n");

	L_playerX = 2, L_playerY = 8; //초기 플레이어 위치 강제 설정

	I_setCursorPos(L_playerX, L_playerY);	
	printf("□");
	SetColor(0, 2);
	I_setCursorPos(1, 16);	//무기 강화 위치
	printf("U");
	SetColor(0, 3);
	I_setCursorPos(16, 8);	// 퀘스트 수락 위치
	printf("Q");
	SetColor(0, 4);
	I_setCursorPos(16, 12);	// 던전 위치
	printf("D");
	SetColor(0, 7);

	I_setCursorPos(30, 9);	// 게임 목표
	printf("무기를 10강 까지 강화하기");
}

void ShowLoading()
{
	system("cls");
	printf("============================\n");
	printf("마을로 이동중...\n");
	printf("============================\n");
	Sleep(500);
}

void ResetText()
{
	for (int i = 10; i < 20; i++)
	{
		I_setCursorPos(30, i);
		printf("                            ");
	}
}
