/*
	�ۼ��� : 2025.02.21
	�ۼ��� : �տ��
	���� : ���ڸ� ǥ���ϴ� ���, �������� Ÿ�� ��ȯ
*/

/*
	����, �Ǽ�
	������ ǥ���ϴ� ��� - ��ȣ��Ʈ MSB - 2�� ���� - unsigned
	�Ǽ��� ǥ���ϴ� ��� - MSB/����/���� - 10 = (0.1)
*/

/*
	���� ���������� ����ؾ� �Ѵ�.
	int, char, short, long
	float, double

	�� �̸� Ÿ���� ����� ������?
	-> ���ϰ� ����ҷ���

	int : ���� + 4����Ʈ : 
		������ ��Ʈ�� 0,1�����ϰ� ������ ��Ʈ ��ȣ ���� ��Ʈ�� ���� 32��

	���ڸ� ����. ��Ʈ���� ����. 0101 0101
	character ���� -> 'a'
	���� ���� -> 97

	������ �� �ܾ� ����
	97 a, 98 b, 99 c ...
	ASCII (American Standard Code for information insitute)

	������ ������ 4����Ʈ �̸��� 'num' ������ �ϼ���.
	int num;
	num = 10;
	num(int)

	literal ���
	10 <- ���� int
	11.5 <- �Ǽ� double
	��ǻ�� ���忡�� ���� ���������� ���� ����ϴ� Ÿ������ ��ȯ��

	�ɺ��� ��� - �̸��� �������� �� �ִ�.

	����ȯ
	�ڵ� - ������
	���� - �����

	����� ��ȯ�ϴ� ���
	float fnum10 = 0.1f;
	int tempint = (int)fnum10
*/

#include<stdio.h>

int main() {
	int num1 = 10;
	char num2 = 1;
	short num3 = 5;
	printf("���� �������� ũ�� ��\n");
	printf("������ ����Ʈ ũ�� : %zd ����Ʈ\n", sizeof(num1));
	printf("������ ����Ʈ ũ�� : %zd ����Ʈ\n", sizeof(num2));
	printf("������ ����Ʈ ũ�� : %zd ����Ʈ\n", sizeof(num3));

	float fnum1 = 0.1f;
	double dnum1 = 0.2;
	printf("�Ǽ� �������� ũ�� ��\n");
	printf("������ ����Ʈ ũ�� : %zd ����Ʈ\n", sizeof(fnum1));
	printf("������ ����Ʈ ũ�� : %zd ����Ʈ\n", sizeof(dnum1));

	printf("���� ���\n");
	char c1 = 'F';
	printf("�� : %c\n", c1);
	printf("�� : %d\n", c1);

	// 128���� a~z, A~Z
	wchar_t charNum = L'��';
	printf("�����ڵ� �� : %d\n", charNum);

	printf("�ɺ��� ��� ����\n"); //const ���� ������ �ʵ��� ��
	const double PI = 3.14;
	//PI = 3.1415;
	printf("�� : %.4lf\n", PI);

	printf("Ex1 ���� ���� ����(PI : 3.14����)\n");
	// ���� ���� = Pi * ������ * ������;
	int radius = 5;
	printf("���� ���� : %lf\n", PI * radius * radius);

	// ex2) �÷��̾� ���
	// ü��, ���ݷ�
	// ��� ü�� <= 0 ���� ���� ü������ ��Ȱ
	// �⺻ ü������ ��Ȱ�ߴ�
	const int basic_hp = 10;
	int hp=10, atk = 10, count=0;
	printf("���� ���� Ƚ����? : ");
	//scanf_s("%d", &count);
	hp = hp - atk * count;
	hp <= 0 ?
		printf("���, ���� %dü������ ��Ȱ\n", basic_hp) : printf("�������\n");
	basic_hp <= atk * count ?
		printf("���, ���� %dü������ ��Ȱ\n", basic_hp) : printf("�������\n");

	//����� ��ȯ
	float fnum10 = 0.1f;
	int tempint = (int)fnum10;

	printf("�� : %d\n", tempint);
	printf("�� : %f\n", (float)tempint);

	//������ ��ȯ
	//case1. ���� �����ڸ� ����� �� �� ������ Ÿ���� �ٸ��� �߻�.
	
	float fnum11 = 0.1f;
	int tempint2 = fnum10;

	printf("�� : %d\n", tempint2);
	printf("�� : %f\n", (float)tempint2);

	//case2. ������ �°ݿ� ���� �ڵ� ����ȯ
	//char, short -> int��ȯ why? : �����ϰ� ���Ϳ��� ������ ����� �Ǵ� ���·� �ٲ�� �ִ�
	// ���ϰԴ� ������ �����̶�� ��
	
	short ex1 = 15;// int�� ��ȯ
	short ex2 = 25;// int�� ��ȯ
	short ex3 = ex1 + ex2;// 15,25�� int -> short�� ��ȯ��

	//case3. �������� �ڷ� ����ġ
	//���ݷ� = �⺻���ݷ� + ���� * ����ġ
	int bAP = 10, level = 1;
	double weight = 0.5;
	int AP = bAP + level * weight;
	//�ڷ����� ��ġ���� ���� ��Ȳ��
	//���� * �Ǽ� => �Ǽ�
	//10 + 0.5 -> 10.5
	//(int)AP = (int)(double) 10.5;

	//case3-2. �ڷ��� ����ġ (����,�Ǽ�) (����,����)
	int abc = 128;
	char ccc = abc; // -127

	// []x4 <- []x1 : [] [] [] []x1
	// []x4 -> []x1 : // [��] [��] [��] // []
	// �ڷ����� ��ȯ�� �� �������� �ս��� ���� ���� �������� ��ȯ�� �ȴ�.
	// [char -> short] -> int -> long -> float -> double
	// char, short�� ������ case2. �� ����

	return 0;
}