#include "WeaponUpgrade.h"

int level = 0, basic_AP = 10, weight = 3, w_AP = 0;

void upgrade() {
	printf("���� ����\n");
	level++;
	w_AP = basic_AP + level * weight;
	printf("��ȭ ����\n");
	printf("��ȭ ����\n");
	printf("%s + [%d]\n", "���� ��", level); // %s, �̸��� ������ �ٲٴ� ����� �ȹ���� ���Ѵ�.
	printf("���ݷ� : %d\n", w_AP);
}