/*
	�ۼ��� : 2025.02.25
	�ۼ��� : �տ��
	���� : �ڵ��� �帧 ���� - �ݺ���
*/

/*
	�ݺ���
	for, while

	for( ; ; )
	//���� ��, ����
	//������ ���� ���� �ݺ����� �����ϰ� ������ ���� �ݺ����� �����.
	//�ݺ� �� ������ ����
	while ()
*/
#include<stdio.h>
#include<stdbool.h>

int main() {
	printf("�ݺ��� ����1 \n");
	// A�̸��� �������� ȹ�� - ����
	int A_count = 0;

	for (int i = 0; i < 10; i++) {
		A_count += 1;
	}

	printf("A item count : %d\n", A_count);

	printf("for �ݺ��� ����2\n");
	int B_count = 0;
	for (int j = 0; j < 10; j++)
	{
		B_count = B_count + j;
	}
	printf("B item count : %d\n", B_count);

	printf("����3\n");
	for (int k = 10; k > 0; k--)
	{
		printf("%d\n", k);
	}

	// ���� ��ȭ ���丮 �ۼ� �غ���
	int level = 0, basic_AP = 10, weight = 3, w_AP = 0;
	char check = ' ';

	for (;;) {
		// ���� ��ȭ ����
		/*
			���� �⺻ ����
			�̸�
			����
			�⺻ ���ݷ�, ����, ����ġ
			��ȭ �� = �⺻ ���ݷ� + ���� x ����ġ
		*/
		level++;
		w_AP = basic_AP + level * weight;
		printf("��ȭ ����\n");
		printf("��ȭ ����\n");
		printf("%s + [%d]\n", "���� ��", level); // %s, �̸��� ������ �ٲٴ� ����� �ȹ���� ���Ѵ�.
		printf("���ݷ� : %d\n", w_AP);

		// ��ȭ�� ��� ���� ������ Ȯ��
		for (;;)
		{
			printf("��ȭ ��� �Ͻ�? (Y/N)\n");
			scanf_s("%c", &check, 1); //�������� �ڸ��� �ε�
			while (getchar() != '\n');//scanf_s ����? c������?

			if (check == 'Y' || check == 'y') {
				check = ' ';
				break;
			}
			else if (check == 'N' || check == 'n') {
				break;
			}
			else {
				printf("�߸��� ���� �Է���\n");
				check = ' ';
				//�Լ������� ��ȭ Ȯ�� ������ ���ư�����
				//���� ���鼭 �����Ѵٰ� ��
				//�Լ��� �ϸ� ��ȣ���ؼ� �Ҳ��� �Լ����� �ǳ�?
				//����Ʈ ��... �������� ��������� �� �� ������
			}
		}
		
		if (check == 'N' || check=='n') break;
		
	}

	// �ݺ����� ����Ѵ�.
	// for�ݺ��� ����ؼ�
	// n�� �ݺ��ϴ� �ڵ带 ���� ǥ���ϱ� ���ؼ�
	// �� �� �ݺ��ؾ� ���� �� �𸣰ڴ� ������ �ִ�.
	// ����) �߸��� �� �Է� �� ��Ȯ�� �� �䱸�ϴ� �ڵ�

	// while �ݺ���
	int xi = 0;

	while (xi < 10) {
		xi++;
		printf("xi �� : %d\n", xi);
	}

	// for�ݺ��� ǥ�� <-> while�ݺ��� ǥ���ϱ�
	// 1���� 10������ ���� print ���
	// for�ݺ���, while�ݺ���
	// �ݺ� Ƚ���� ������ ������ for�ݺ����� ����?
	// �ݺ� Ƚ���� �� �𸦶� while �ݺ����� ���ϴ�?

	int C_count = 0, C_num = 0;
	while (true) { //������ if������ ����ص� �ȴ�.
		C_num += 2;
		C_count++;

		printf("�ݺ��� �� : %d\n", C_count);
		printf("���� �� : %d\n", C_num);
		break;
	}

	return 0;

}