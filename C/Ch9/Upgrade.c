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
	int nomalCost = 100;
	int highCost = 500;

	while (true)
	{
		printf("���� ���� �� : %d\n", CurrentMoney);
		printf("���׷��̵� �޴� â\n1.��ȭ\n2.������ȭ(30��)\n3.����\n4.�� ����\n5.100��¥�� ������ ����\n");

		int inputnumber = 0;
		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');// �̰� ������ ������ ���� ����ؼ� ������ ���ŵ�..

		if (inputnumber == 1) {
			if (UseMoney(nomalCost)) {
				WeaponUpgrade();
			}
		}
		else if (inputnumber == 2)
		{
			if (UseMoney(highCost)) {
				CashUpgrade();
			}
		}
		else if (inputnumber == 3) {
			printf("��ȭ �׸�\n");
			break;
		}
		else if (inputnumber == 4) {
			printf("�� ����\n");
		}
		else if (inputnumber == 5) {
			//BuyItem(100);
		}
		else
		{
			printf("�� ����\n");
		}
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