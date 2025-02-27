/*
	업그레이드 시스템
	무기의 레벨과 레벨에 따른 공격력을 증가시킨다.
	레벨, 공격력 정보가 저장되어야 하는가? 아닌가?
		-> 저장해야 함
	레벨, 공격력 정보 -> 일단 전역 변수 선언 
		>> 다른 방식으로 하는게 좋긴한데 현재 내용으로는 여기까지

*/

#include "Upgrade.h"

int weaponL = 0, weaponL_C;
int baseAP = 10;
int currentAP = 10;

void ShowUpgradeMenu()
{
	while (true)
	{
		system("cls");
		printf("업그레이드 메뉴 창\n1.강화\n2.현질강화\n3.종료\n");

		int inputnumber = 0;
		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');// 이거 생각은 하지만 문법 기억해서 다적기 빡신디..

		if (inputnumber == 1) {
			WeaponUpgrade();
		}
		else if (inputnumber == 2)
		{
			CashUpgrade();
		}
		else if (inputnumber == 3) {
			printf("강화 그만\n");
			break;
		}
		else
		{
			printf("핵 금지\n");
		}
		_getch(); //입력 값을 받아오는 명령어
	}
}

void WeaponUpgrade()
{
	int weight = 3;
	weaponL = weaponL + 1;
	currentAP = currentAP + weight * weaponL;

	printf("무기 강화\n");
	printf("강화 레벨 + [%d] + [%d]\t현재 공격력 : %d\n", weaponL, weaponL_C, currentAP);
}

void CashUpgrade()
{
	int weight = 5;
	weaponL_C = weaponL_C + 1;
	currentAP = currentAP + weight * weaponL_C;

	printf("현질 강화\n");
	printf("강화 레벨 + [%d] + [%d]\t현재 공격력 : %d\n", weaponL, weaponL_C, currentAP);
}
