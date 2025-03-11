#include "Enforce.h"

void L_Enforce()
{
	Sleep(50);
	GoVillage = false;

	L_ShowEnforce();
}

void L_ShowEnforce()
{
	system("cls");
	printf("현재 Coin : %d, QuestCoin : %d \n\n", L_Coin, L_QuestCoin);
	printf("무기 강화소에 어서 오세요\n");
	printf("무기 강화 확률(일반 : 70%, 특수 100%)\n\n");
	printf("   일반 강화 - (Coin : 2 소모)\n");
	printf("   특수 강화 - (QuestCoin : 1 소모)\n");
	printf("   강화 종료\n");
	printf("\n현재 무기 정보 : [+%d] %s", W_level, "초보자의 검");
	
	L_playerX = 1, L_playerY = 5;

	I_setCursorPos(L_playerX, L_playerY);
	printf(">");

	while (true) {
		I_setCursorPos(L_playerX,L_playerY);
		printf(" ");

		if (_kbhit()) {
			I_setCursorPos(L_playerX, L_playerY);
			printf("  ");

			if (GetAsyncKeyState(VK_UP) && 0x0800) {
				L_playerY -= 1;
				if (L_playerY <= 5) {
					L_playerY = 5;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) && 0x0800) {
				L_playerY += 1;
				if (L_playerY >= 7) {
					L_playerY = 7;
				}
			}

			if (GetAsyncKeyState(VK_RETURN) && 0x0800) {
				if (L_playerY == 5) {
					L_NormalEnforce();
				}
				else if (L_playerY == 6) {
					L_SuperEnforce();
				}
				else if (L_playerY == 7) {
					GoVillage = true;
					break;
				}
			}
		}

		I_setCursorPos(L_playerX, L_playerY);
		printf(">");

		Sleep(50);
	}
	if (GoVillage) {
		L_GameLoop();
	}
}

void L_NormalEnforce()
{
	if (L_Coin >= 2) {
		L_Coin -= 2;
		if (E_CheckRandomFunc(70)) {
			W_level++;
			Enforce_ResetText();
			I_setCursorPos(60, 1);
			printf(".");
			Sleep(100);
			printf(" .");
			Sleep(300);
			printf(" !?");
			Sleep(500);
			printf(" 성공!");
		}
		else {
			Enforce_ResetText();
			I_setCursorPos(60, 1);
			printf(".");
			Sleep(100);
			printf(" .");
			Sleep(300);
			printf(" ?!");
			Sleep(500);
			printf(" 실패!");
		}
	}
	else {
		Enforce_ResetText();
		I_setCursorPos(60, 3);
		printf("Coin 부족!");
		I_setCursorPos(60, 4);
		printf("Coin을 얻은 수 시도하세요");
	}
	I_setCursorPos(0,0);
	printf("현재 Coin : %d, QuestCoin : %d \n\n", L_Coin, L_QuestCoin);
	I_setCursorPos(0, 8);
	printf("\n현재 무기 정보 : [+%d] %s", W_level, "초보자의 검");
}

void L_SuperEnforce()
{
	if (L_QuestCoin > 0) {
		L_QuestCoin--;
		W_level++;
		Enforce_ResetText();
		I_setCursorPos(60, 1);
		printf("(*");
		Sleep(200);
		printf(" °▽°");
		Sleep(200);
		printf(" *)");
		Sleep(200);
		printf(" 성공!!");
	}
	else {
		Enforce_ResetText();
		I_setCursorPos(60, 3);
		printf("QuestCoin 부족!");
		I_setCursorPos(60, 4);
		printf("QuestCoin을 얻은 수 시도하세요");
	}

	I_setCursorPos(0, 0);
	printf("현재 Coin : %d, QuestCoin : %d \n\n", L_Coin, L_QuestCoin);
	I_setCursorPos(0, 8);
	printf("\n현재 무기 정보 : [+%d] %s", W_level, "초보자의 검");

}

void Enforce_ResetText()
{
	for (int i = 0; i < 5; i++)
	{
		I_setCursorPos(60, i);
		printf("                                             ");
	}

}
