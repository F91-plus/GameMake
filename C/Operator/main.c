/*
	�ۼ��� : 2025.02.14
	�ۼ��� : �տ��
	���� : ������ �ǽ�
*/

/*
	���� ������
	��ȣ +, -	 -10, +10

	���� ������
	num1 + num2

	���� ������
	? 1�� = 2�� : 3��

	��Ģ���� : + - * / %
*/

/*
	����Ʈ ������ >>, <<
	���� ������	>, <, ==
	��Ʈ ������ ^ | 
	�� ������ !
*/

/*
	�� ������ ��� : ��(true) 1, ����(false) 0
*/

/*
	#include <> -> �ý��� ���� ����
	#include "" -> ����� ���� ����
*/

#include <stdio.h>
#include <stdbool.h>
#include "Test.h"

int main() {
	printf("������ �ǽ�\n");

	int num1 = 10;
	int num2 = 3;

	//����
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//����
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//����
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//������
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//������
	printf("%d ������ %d = %d\n", num1, num2, num1 % num2);

	printf("%d > %d : %d \n", num1, num2, num1>num2);
	printf("%d > %d : %d \n", num1, num2, num2 > num1);

	
	bool istrue = true;
	bool isfalse = false;

	int result1 = num1 > num2;

	printf("���� ������ ��� ��� : %s\n", result1 ? "true" : "false");
	printf("���� ������ ��� ��� : %d\n", result1 ? 1 : 0);

	// !num2 : num2�� �ƴϴ�(����) false -> true // true -> false

	printf("���� ������ : %d\n", num1 != num2);

	printf("���� ������ : %d\n", (num1 != num2) || (num1 < num2));
	printf("���� ������ : %d\n", (num1 != num2) && (num1 < num2));
	//printf("\n");

	printf("���� ����\n");
	int num3 = 3;
	int num4 = 4;
	
	num3 += num4; //7

	num3++; //7 ��� ���� 8 printf�� ���ٸ�
	++num4; //5

	//������ ���丮
	//���⸦ ��ȭ�ϴµ�
	//n���� ���� ����, n+1 ������ ������ ȭ�鿡 ���
	int select;
	int basic = 3, total1 = basic, total2=0;
	printf("Ȯ���ϰ� ���� ���� ��ȭ ������ �Է�(0~9): ");
	scanf_s("%d", &select);
	total1 = (basic + select) * select;
	total2 = (basic + select+1) * select+1;
	printf("�Է� +%d��ȭ ���� : %d\n", select,total1);
	printf("���� +%d��ȭ ���� : %d\n", select+1,total2);


	//2
	// ������ �κ��丮, Slot, ��Ÿ ������ ����, Stack * ����
	// Slot �ִ� ���� : ����
	// Stack �ִ� ���� : ����
	// A�������� n�� Ƚ��, B������ m�� ȹ��
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ��
	// 3�� ������
	int Slot=3, Stack=3;
	int item_A, item_B;
	int item_box = Slot * Stack;
	int item_AB;
	printf("���� �κ��丮 ĭ�� %dĭ�Դϴ�.\n", item_box);
	printf("ȹ�� �Ͻ� ������A�� ������ �Է� : ");
	scanf_s("%d", &item_A);
	printf("ȹ�� �Ͻ� ������B�� ������ �Է� : ");
	scanf_s("%d", &item_B);
	item_AB = item_A + item_B;

	//3
	//����� ���� ���丮 �ۼ�
}
