/*
	작성명 : 2025_02_17
	작성자 : 손용민
	주제 : 변수
*/

#include <stdio.h>

int main() {
	/*
		player : 닉네임(문자열)
		enemy : 몬스터 이름(문자열)
		player's attackpower : 플레이어의 공격력(숫자)
		enemy's attackpower : 몬스터의 공격력(숫자)
	*/

	// 변수를 이용해서 한방에 player이름을 바꾸어 보자
	// Hey Computer player's attackpower change the value 8
	// 컴퓨터에게 전달해야 할 정보(변수의 이름, 어떠한 종류인가, 값)

	int p_AP = 8;
	int p_cAP = 16;
	int e_AP = 3;

	printf("%s와 %s가 어딘가에서 만남.\n", "SYM", "Slime");
	printf("%s은(는) %s에게 다가가 공격 시도.\n", "Slime", "SYM");
	printf("%s은(는) %s공격을 막고 반격으로 %d 보다 2배 큰 데미지를 줬습니다.\n", "SYM", "Slime", p_AP);
	printf("%s은(는) %s에게 %d의 치명적인 피해를 입고 죽음.\n", "Slime", "SYM", p_cAP);

	char ch1 = 'S';
	int in1 = 91;
	float fl1 = 0.91f;
	
	printf("문자열 출력 : %c\n", ch1);
	printf("정수 출력 : %d\n", in1);
	printf("실수 출력 : %f\n", fl1);
	printf("문자열 출력 : 늅늅\n\n\n");

	//강화 스토리
	int level = 0;
	float success_0 = 100, fail_0 = 0;
	//char name = 'P';

	printf("[%s] + %d\n", "초심자의 검", level);
	printf("0 -> 1 강화확률 [성공 : %f, 실패 : %f]\n", success_0, fail_0);
	printf("강화 시도\n");
	printf("강화 성공 [%s] + %d \n", "초심자의 검", level+1);
}

// 1. 출력하고 싶은 내용을 작성
// 2. 단어, 정수, 실수, 문자열 출력