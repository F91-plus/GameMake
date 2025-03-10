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
	printf("���� Coin : %d, QuestCoin : %d\n\n", L_Coin, L_QuestCoin);
	printf("���� ��ȭ�ҿ� � ������\n");
	printf("���� ��ȭ Ȯ��(�Ϲ� : 70%, Ư�� 100%)\n\n");
	printf("   �Ϲ� ��ȭ - (Coin : 3 �Ҹ�)\n");
	printf("   Ư�� ��ȭ - (QuestCoin : 1 �Ҹ�)\n");
	printf("   ��ȭ ����\n");
	
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
	if (L_Coin > 0) {
		L_Coin--;
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
			printf(" ����!");
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
			printf(" ����!");
		}
	}
	else {
		Enforce_ResetText();
		I_setCursorPos(60, 3);
		printf("Coin ����!");
		I_setCursorPos(60, 4);
		printf("Coin�� ���� �� �õ��ϼ���");
	}
	I_setCursorPos(0,0);
	printf("���� Coin : %d, QuestCoin : %d\n\n", L_Coin, L_QuestCoin);
}

void L_SuperEnforce()
{
	if (L_QuestCoin >= 0) {
		L_QuestCoin--;
		W_level++;
		Enforce_ResetText();
		I_setCursorPos(60, 1);
		printf("(*");
		Sleep(200);
		printf(" �ơ��");
		Sleep(200);
		printf(" *)");
		Sleep(200);
		printf(" ����!!");
	}
	else {
		Enforce_ResetText();
		I_setCursorPos(60, 3);
		printf("QuestCoin ����!");
		I_setCursorPos(60, 4);
		printf("QuestCoin�� ���� �� �õ��ϼ���");
	}

	I_setCursorPos(0, 0);
	printf("���� Coin : %d, QuestCoin : %d\n\n", L_Coin, L_QuestCoin);
}

void Enforce_ResetText()
{
	for (int i = 0; i < 5; i++)
	{
		I_setCursorPos(60, i);
		printf("                                             ");
	}

}
