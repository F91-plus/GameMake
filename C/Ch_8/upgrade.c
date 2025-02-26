#include "WeaponUpgrade.h"

int level = 0, basic_AP = 10, weight = 3, w_AP = 0;

void upgrade() {
	printf("게임 진행\n");
	level++;
	w_AP = basic_AP + level * weight;
	printf("강화 시작\n");
	printf("강화 성공\n");
	printf("%s + [%d]\n", "뉴비 검", level); // %s, 이름을 변수로 바꾸는 방법을 안배워서 안한다.
	printf("공격력 : %d\n", w_AP);
}