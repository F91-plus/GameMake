/*
	�ۼ��� : 2025.02.24
	�ۼ��� : �տ��
	���� : �ڵ��� �帧 ����
*/

/*
	main �Լ��� ���α׷��� ������
	������ ���� ������� �ڵ尡 �����
	main �Լ��� ������ �߰�ȣ�� ������ ���α׷��� ����ȴ�.
	����� : ���α׷��� �ߴܽ��Ѽ� �ڵ带 Ȯ���ϴ� ���
	- F9 �ߴ��� ���� �Ǵ� ����
	- F11 �ߴ��� ���� �ϳ��� ����
	
	���ǹ�, �б�, branch ��� �ϰ��
	if() {}
	() : ����
	{} : ��ü, body

	������ ��
	if();{}
	- ��� : ���ǹ� ������� �ڵ尡 �����
		- ��..?
	->�ؼ����ڸ� if(15<10); => if(15<10){} ��� ����
	�׷��� �Ʒ��� �ִ� {} �� �ִ� ���� �׳� ���Ǵ� �ɷ� �ν��� ��

	if(����1)
	¦�� : n%2 == 0
	Ȧ�� : n%2 == 1

	else if -> �� ������ �ƴ� �̷��� ����
	else -> ������ ��� �͵�

	������ �������� ���� ���� �̻��̸� 'N' ����� �ޱ�� �ý���
	���� >= 100 : S ���
	���� >= 90 : A ���
	���� < : bye

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("���ǹ� ����\n");

	//int�� ���̸�? : ���� �����ϴ� ���� + 4����Ʈ ũ��
	int count = 15;

	if (count < 10) {// true, false
		printf("count ���� 10���� �۴�\n");
	}
	else {
		printf("Ľ ��!\n");
	}

	int recode = 99;
	if (recode == 100) {
		printf("S");
	}
	else if (recode >= 90 && recode < 100) {
		printf("A");
	}
	else {
		printf("B");
	}

	//���� ����
	//������ ����
	//���ǹ� Ȯ���ؼ� ���� �Է��� ���ڿ� �� ũ�� �۴� ���
	
	srand(time(NULL)); // rand �Լ��� �������� �õ尪�� �ֱ� ���� �Լ�
	// time(NULL) : 1970�� 1�� 1�� ���� ����� �ð��� �� ������ ��ȯ�ϴ� �Լ�
	// 1�� ������ �Ź� �ٸ� �õ尪�� ������ rand()�Լ��� ȣ����
	int input;
	int com_input;
	com_input = rand() % 9; // 0~8, 0 ~ 32767���� ����,  srand�� ���� �� ������ ������ ����
	//com_input = rand() % 9+1; // 1~9

	printf("���ϴ� ���� �Է��ϼ� ����0~9");
	scanf_s("%d", &input);

	if (input > com_input) {
		printf("ŭ\n");
		printf("�� : %d\n", com_input);
	}
	else if(input == com_input) {
		printf("����\n");
		printf("�� : %d\n", com_input);
	}
	else
	{
		printf("����");
		printf("�� : %d\n", com_input);
	}

	// ���� ����2
	// ���� ���߱� ���ӿ��� ������ ���� Ƚ���� ���� ��ŷ�� �ο�
	// if �� ���
	int if_num_ex2_count = 1;

	if (if_num_ex2_count == 1) {

	}
	// switch �� ���
	int switch_num_ex2_count = 1;
	switch (switch_num_ex2_count)
	{
		case 1: 
		case 2: 
			printf("good");
			break;
		case 3: 
			printf("3");
			break;
		case 4:
			printf("4");
			break;
		default:
			break;
	}

	// ���� �� ��ŷ, Ƚ�� ���� ��ŷ
	// ��ŷ�� �ο��� �� �ִ� ���丮�� �ۼ�
	// ���ǹ� ���

	if (recode == 100) {
		printf("S");
	}
	else if (recode >= 90 && recode < 100) {
		printf("A");
	}
	else if (recode >= 80 && recode < 90) {
		printf("B");
	}
	else {
		printf("�ٽ� ��");
	}


	return 0;
}