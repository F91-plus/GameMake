/*
	���׷��̵� �ý���
	������ ������ ������ ���� ���ݷ��� ������Ų��.
	����, ���ݷ� ������ ����Ǿ�� �ϴ°�? �ƴѰ�?
		-> �����ؾ� ��
	����, ���ݷ� ���� -> �ϴ� ���� ���� ���� 
		>> �ٸ� ������� �ϴ°� �����ѵ� ���� �������δ� �������

*/

#include "Upgrade.h"

int weaponL = 0, weaponL_C;
int baseAP = 10;
int currentAP = 10;

void ShowUpgradeMenu()
{
	while (true)
	{
		system("cls");
		printf("���׷��̵� �޴� â\n1.��ȭ\n2.������ȭ\n3.����\n");

		int inputnumber = 0;
		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');// �̰� ������ ������ ���� ����ؼ� ������ ���ŵ�..

		if (inputnumber == 1) {
			WeaponUpgrade();
		}
		else if (inputnumber == 2)
		{
			CashUpgrade();
		}
		else if (inputnumber == 3) {
			printf("��ȭ �׸�\n");
			break;
		}
		else
		{
			printf("�� ����\n");
		}
		_getch(); //�Է� ���� �޾ƿ��� ��ɾ�
	}
}

void WeaponUpgrade()
{
	int weight = 3;
	weaponL = weaponL + 1;
	currentAP = currentAP + weight * weaponL;

	printf("���� ��ȭ\n");
	printf("��ȭ ���� + [%d] + [%d]\t���� ���ݷ� : %d\n", weaponL, weaponL_C, currentAP);
}

void CashUpgrade()
{
	int weight = 5;
	weaponL_C = weaponL_C + 1;
	currentAP = currentAP + weight * weaponL_C;

	printf("���� ��ȭ\n");
	printf("��ȭ ���� + [%d] + [%d]\t���� ���ݷ� : %d\n", weaponL, weaponL_C, currentAP);
}
