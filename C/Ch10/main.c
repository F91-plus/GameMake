/*
	�ۼ��� : 2025.02.28
	�ۼ��� : �տ��
	���� : �Լ��� ����
*/

/*
	�Լ� : input ���� output ��ȯ(����)�Ѵ�.
			A			B
	A������ ��򰡿� �����Ͽ� B��� ��������� ��ȯ�Ѵ�.

	A, B
	���	: �Լ��� �̸� �ۼ�
	����	: ȣ��� �Լ� ��ġ

	void Upgrade(){}
	1. void		: ��ȯ ���� = B���� ��� �� Ÿ���� �����Ѵ�, ��ȯ���� ����.
	2. Upgrade	: �Լ��� �̸�
	3. ()		: A���� Ÿ���� �����ϴ� ��. �ƹ� �͵� ������ voidŸ���̴�.
	4. {}		: �ڵ尡 ���ǵǴ� �κ�. body

	void ���� ��ȯ ���¿����� ������ �ȵǴµ�, �Ű� ������ �ش��ϴ� ������ �� �� �ִ� ����?
	Upgrade(){}

	��ȯ���� ���� -> ������ void, ������ int
*/

#include <stdio.h>
#include <stdbool.h>

int currentMoney = 100;

// �������� ��ġ�� amount, ������ �� �ִ��� ������
// ���ǹ����� �� �ڵ带 ����� �����Ϸ��� �Ѵ�.
// �� ������ : ���� ������ < �������� ��ġ = ���� -> false
bool IsMoneyEnough(int amount) {
	return currentMoney >= amount ? true : false;
}

void BuyItem(int price) {
	if (IsMoneyEnough(price)) {
		printf("���� �Ϸ�");
	}
	else
	{
		printf("���� �Ұ���");
	}
}

void Example() {
	printf("ex\n");
}

int MultiplyNumber(int input) {
	int a = 10;
	return 10 * input;
}

int main() {
	Example();
	
	int result = MultiplyNumber(5);
	printf("%d\n", result);

	BuyItem(10);
}