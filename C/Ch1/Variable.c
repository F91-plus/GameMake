/*
	�ۼ��� : 2025_02_17
	�ۼ��� : �տ��
	���� : ����
*/

#include <stdio.h>

int main() {
	/*
		player : �г���(���ڿ�)
		enemy : ���� �̸�(���ڿ�)
		player's attackpower : �÷��̾��� ���ݷ�(����)
		enemy's attackpower : ������ ���ݷ�(����)
	*/

	// ������ �̿��ؼ� �ѹ濡 player�̸��� �ٲپ� ����
	// Hey Computer player's attackpower change the value 8
	// ��ǻ�Ϳ��� �����ؾ� �� ����(������ �̸�, ��� �����ΰ�, ��)

	int p_AP = 8;
	int p_cAP = 16;
	int e_AP = 3;

	printf("%s�� %s�� ��򰡿��� ����.\n", "SYM", "Slime");
	printf("%s��(��) %s���� �ٰ��� ���� �õ�.\n", "Slime", "SYM");
	printf("%s��(��) %s������ ���� �ݰ����� %d ���� 2�� ū �������� ����ϴ�.\n", "SYM", "Slime", p_AP);
	printf("%s��(��) %s���� %d�� ġ������ ���ظ� �԰� ����.\n", "Slime", "SYM", p_cAP);

	char ch1 = 'S';
	int in1 = 91;
	float fl1 = 0.91f;
	
	printf("���ڿ� ��� : %c\n", ch1);
	printf("���� ��� : %d\n", in1);
	printf("�Ǽ� ��� : %f\n", fl1);
	printf("���ڿ� ��� : ����\n\n\n");

	//��ȭ ���丮
	int level = 0;
	float success_0 = 100, fail_0 = 0;
	//char name = 'P';

	printf("[%s] + %d\n", "�ʽ����� ��", level);
	printf("0 -> 1 ��ȭȮ�� [���� : %f, ���� : %f]\n", success_0, fail_0);
	printf("��ȭ �õ�\n");
	printf("��ȭ ���� [%s] + %d \n", "�ʽ����� ��", level+1);
}

// 1. ����ϰ� ���� ������ �ۼ�
// 2. �ܾ�, ����, �Ǽ�, ���ڿ� ���