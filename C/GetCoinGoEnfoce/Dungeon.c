#include "Dungeon.h"

int D_xPos = 0, D_yPos = 0;
int q_itemPosX1 = 0;
int q_itemPosY1 = 0;

void D_Play(int x, int y) {
	GoVillage_D = false;

	L_playerX = 1;
	L_playerY = 1;
	I_setCursorPos(L_playerX, L_playerY);
	printf("��");

	while (true) {
		if (_kbhit()) {
			I_setCursorPos(L_playerX, L_playerY);
			printf(" ");

			if (GetAsyncKeyState(VK_UP) & 0x8000) {
				//��
				L_playerY -= 1;
				if (L_playerY <= 1) {
					L_playerY = 1;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
				//�Ʒ�
				L_playerY += 1;
				if (L_playerY >= y) {
					L_playerY = y-1;
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
				if (L_playerX >= x) {
					L_playerX = x-1;
				}
			}
			else
			{
				// x,y ��ǥ�� �״��
			}
		}

		I_setCursorPos(30, 10);
		printf("���� ������..");

		//quest information
		I_setCursorPos(30, 13);
		printf("����Ʈ ���� ��");//������ random
		I_setCursorPos(30, 14);
		printf("���� %d���� ���� �����ϱ�", q_count);//������ random
		I_setCursorPos(30, 15);
		printf("���� ���� ���� : %d�� ", q_item);

		//my state
		I_setCursorPos(30, 20);
		printf("������ ����");
		I_setCursorPos(30, 21);
		printf("Coin : %d, QuestCoin : %d", L_Coin, L_QuestCoin);
		I_setCursorPos(30, 22);
		printf("���� ���� : [+%d] %s", W_level, "�ʺ����� ��");

		I_setCursorPos(L_playerX, L_playerY);
		printf("��");

		Sleep(50);

		//���� Ż�ⱸ
		if (L_playerX == x - 1 && L_playerY == y - 1) {
			GoVillage_D = true;
			break;
		}

		//����Ʈ ����ǰ ��ġ
		if (L_playerX == q_itemPosX1 && L_playerY == q_itemPosY1) {
			q_itemPosX1 = 0;
			q_itemPosY1 = 0;
			q_item++;
		}
	}

	if (GoVillage_D) {
		D_xPos = 0, D_yPos = 0;

		L_GameLoop();
	}
}

void D_Map(int D_x, int D_y)
{
	int D_xCount = D_xPos + D_x;	// �˰��� �����ϴٺ��� ���� �ʿ���� ��
	int D_yCount = D_yPos + D_y;
	int Item_x = D_CreateItem_X();	//
	int Item_y = D_CreateItem_Y();
	q_itemPosX1 = Item_x;
	q_itemPosY1 = Item_y;

	if (Item_x >= D_x) {
		q_itemPosX1 = D_x - 2;
	}
	if (Item_y >= D_y) {
		q_itemPosY1 = D_y - 2;
	}

	system("cls");

	printf("�������� �̵���.");
	Sleep(100);
	printf(" .");
	Sleep(200);
	printf(" .");
	Sleep(300);

	system("cls");


	

	while (true)
	{
		//I_setCursorPos(30, 5);
		//printf("X : %d	Y : %d", q_itemPosX1, q_itemPosY1);
		//printf("D_xPos : %d  D_yPos : %d  D_xCount : %d  D_yCount : %d\n", D_xPos, D_yPos, D_xCount, D_yCount);
		//Sleep(1000);

		//ù ��
		if (D_xPos == 0) {
			for (int i = 0; i < D_x; i++)
			{
				I_setCursorPos(D_xPos, D_yPos); //0,0
				printf("��");
				D_xPos++;
			}

			if (D_xPos == D_xCount) {
				D_yPos++;
			}
			printf("��");
		}

		//�߰� ��
		if (D_yPos >= 1 && D_yPos < D_yCount) {
			D_xPos = 0;
			I_setCursorPos(D_xPos, D_yPos);	// 0, 1
			printf("��");

			for (int i = 0; i < D_x; i++) {
				if (q_itemPosX1 == D_xPos && q_itemPosY1 == D_yPos) {
					SetColor(0, 2);
					I_setCursorPos(D_xPos, D_yPos);
					printf("*");
					SetColor(0, 7);
				}
				else
				{
					I_setCursorPos(D_xPos+1, D_yPos);// 1, 1
					printf(" ");
				}
				D_xPos++;

				if (D_xPos == D_xCount) {
					I_setCursorPos(D_xPos, D_yPos);
					printf("��");
					D_yPos++;
				}
			}
		}

		// ������ ��
		if (D_yPos == D_yCount)
		{
			D_xPos = 0;
			for (int i = 0; i < D_x; i++)
			{
				I_setCursorPos(D_xPos, D_yPos);
				printf("��");
				D_xPos++;
			}
			printf("��");
			break;
		}

	}
	I_setCursorPos(D_x - 1, D_y - 1);
	printf("E");

	//�����ϰ� �����ϰ� �ҷ��� �迭�� �ʿ��� ��, �ƴϸ� �밡��
	// ����ǰ ����

	D_xCount = 0;
	D_yCount = 0;

}

//������, ��ġ