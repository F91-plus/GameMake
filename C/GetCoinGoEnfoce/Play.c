#include "Play.h"

bool V_Enforce = false;
bool V_Quest = false;
bool V_Dungeon = false;

void L_GameLoop() {
	V_Enforce = false;	// ��ǥ�� �����̶� bool ���� ���ص� ������� ��?

	ShowLoading();
	ShowVillage();

	while (true) {
		if (_kbhit()) {
			I_setCursorPos(L_playerX, L_playerY);//2, 8
			printf("  ");

			if (GetAsyncKeyState(VK_UP) & 0x8000) {
				//��
				L_playerY -= 1;
				if (L_playerY <= 8) {
					L_playerY = 8;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
				//�Ʒ�
				L_playerY += 1;
				if (L_playerY >= 16) {
					L_playerY = 16;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
				//��
				L_playerX -= 1;
				if (L_playerX <= 0) {
					L_playerX = 1;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
				//��
				L_playerX += 1;
				if (L_playerX >= 17) {
					L_playerX = 16;
				}
			}
			else
			{
				// x,y ��ǥ�� �״��
			}
		}
		I_setCursorPos(30, 20);
		printf("������ ����");
		I_setCursorPos(30, 21);
		printf("Coin : %d, QuestCoin : %d", L_Coin, L_QuestCoin);
		I_setCursorPos(30, 22);
		printf("���� ���� : [+%d] %s", W_level, "�ʺ����� ��");
		
		I_setCursorPos(L_playerX, L_playerY);
		printf("��");

		if (V_Quest) {
			I_setCursorPos(30, 13);
			printf("����Ʈ ���� ��");//������ random
			I_setCursorPos(30, 14);
			printf("���� %d���� ���� �����ϱ�", 1);//������ random
		}

		Sleep(50);

		//Enfoce
		if (L_playerX == 1 && L_playerY == 16) {
			V_Enforce = true;
			break;
		}
		//Quest
		if (L_playerX == 16 && L_playerY == 8) {
			L_playerX = 10, L_playerY = 8;
			I_setCursorPos(L_playerX, L_playerY);
			printf("��");

			Sleep(100);

			I_setCursorPos(16, 8);
			printf("Q");

			if (V_Quest) {
				ResetText();
				I_setCursorPos(30, 10);
				printf("�̹� ����Ʈ�� ���� �� �Դϴ�.");
			}
			else
			{
				V_Quest = true;
				I_setCursorPos(30, 11);
				printf("����Ʈ ����!");
			}
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
			printf("����Ʈ ���� �ʿ�!");
		}
	}

	if (V_Enforce) {
		L_Enforce();
	}
	if (V_Dungeon) {

	}

}

void ShowVillage()
{
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("��������������������\n");
	printf("��                 ��\n"); //���� 17
	printf("��                 ��\n");
	printf("��                 ��\n");
	printf("��                 ��\n");
	printf("��                 ��\n"); // 
	printf("��                 ��\n");
	printf("��                 ��\n");
	printf("��                 ��\n");
	printf("��                 ��\n");
	printf("��������������������\n");

	L_playerX = 2, L_playerY = 8; //�ʱ� �÷��̾� ��ġ ���� ����

	I_setCursorPos(L_playerX, L_playerY);	
	printf("��");
	I_setCursorPos(1, 16);	//���� ��ȭ ��ġ
	printf("E");
	I_setCursorPos(16, 8);	// ����Ʈ ���� ��ġ
	printf("Q");
	I_setCursorPos(16, 12);	// ���� ��ġ
	printf("D");
}

void ShowLoading()
{
	system("cls");
	printf("============================\n");
	printf("������ �̵���...\n");
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
