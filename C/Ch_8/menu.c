#include "menu.h"
#include "WeaponUpgrade.h"

//ctrl+k+s : �ڵ� ���α�
char check = ' ';

void SelectMenu() {
	while (true)
	{
		system("cls");
		int input = -1;
		printf("1.�����ϱ�\n2.�̾��ϱ�\n3.�����ϱ�\n4.�����ϱ�\n");
		scanf_s("%d", &input);
		while (getchar() != '\n');//getchar -> character(Ÿ�� ���ڸ� ������ ��) �Է� ���� \n �ƴ� �͸� �޾ƿ´�.

		if (input == 1) {
			upgrade();
		}
		else if (input == 2)
		{
			printf("�̾��ϱ�\n");
		}
		else if (input == 3) {
			printf("���� ����\n");
		}
		else if (input == 4)
		{
			printf("����\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է���\n");
		}
		//alt + ȭ��ǥ -> �ش� ȭ��ǥ �������� �̵��� 
		//�÷��̾ Ư�� Ű�� �Է����� �� �Ѿ���� �ϰ�ʹ�.

		printf("������ �Ϸ��� �ƹ� Ű�� �Է�\n");
		_getch(); //�Է� ���� �޾ƿ��� ��ɾ�
	}
}