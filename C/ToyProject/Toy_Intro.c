#include "Toy_Intro.h"

void IntroMenu()
{
	while (true)
	{
		//UI text
		printf("1 Start\n");
		printf("2 Exit\n");

		//Logic
		int inputNumber = -1;// -1����ϴ� ����?
		scanf_s("%d", &inputNumber);//&�ּ�â���� �޾ƿ´�.
		while (getchar() != '\n'); //���� ���� ���� ���� �ڵ�

		//�� ������ '==' - ���ǹ��� �Բ� ����Ѵ�.
		if (inputNumber == 1) {
			//start
			GameLoop();
		}
		else if (inputNumber == 2) {
			//exit
			break;
		}
		else
		{
			//not correct number
		}
	}
}
