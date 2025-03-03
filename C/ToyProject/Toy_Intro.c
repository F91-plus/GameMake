#include "Toy_Intro.h"

void IntroMenu()
{
	while (true)
	{
		//UI text
		printf("1 Start\n");
		printf("2 Exit\n");

		//Logic
		int inputNumber = -1;// -1사용하는 이유?
		scanf_s("%d", &inputNumber);//&주소창으로 받아온다.
		while (getchar() != '\n'); //엔터 버퍼 비우기 위한 코드

		//비교 연산자 '==' - 조건문을 함께 사용한다.
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
