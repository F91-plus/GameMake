#include "menu.h"
#include "WeaponUpgrade.h"

//ctrl+k+s : 코드 감싸기
char check = ' ';

void SelectMenu() {
	while (true)
	{
		system("cls");
		int input = -1;
		printf("1.시작하기\n2.이어하기\n3.설정하기\n4.종료하기\n");
		scanf_s("%d", &input);
		while (getchar() != '\n');//getchar -> character(타입 문자를 가지고 옴) 입력 버퍼 \n 아닌 것만 받아온다.

		if (input == 1) {
			upgrade();
		}
		else if (input == 2)
		{
			printf("이어하기\n");
		}
		else if (input == 3) {
			printf("설정 진행\n");
		}
		else if (input == 4)
		{
			printf("종료\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력함\n");
		}
		//alt + 화살표 -> 해당 화살표 방향으로 이동함 
		//플레이어가 특정 키를 입력했을 때 넘어가도록 하고싶다.

		printf("진행을 하려면 아무 키를 입력\n");
		_getch(); //입력 값을 받아오는 명령어
	}
}