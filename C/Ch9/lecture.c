#include "lecture.h"

void ShowExample() {
	int number = 10;
	printf("����number�� �� : %d\n", number);

	printf("����number�� �� : %d\n", number);

	LocalFunc(10);// ������ �Ҹ��� �ݺ�
	LocalFunc(10);//���� ����������... �ռ� ȣ���ϰ� ���� �Ҹ��� �Ǿ��� ������ ���� ���� ����

	return 0;
}

void LocalFunc(int a) {
	int value = 5;
	printf("a+5 = %d\n", a + value);
	value += 100;
}