/*
	작성일 : 2025.02.18
	작성자 : 손용민
	주제 : 변수에 대한 이해
*/

/*
	변수
	변수 선언
	데이터형 변수의이름; 변수의 이름 데이터형의 성질을 갖는다.

	변수 초기화 : 변수에 처음으로 값을 대입하는 것

	주의할 점

	변수 사용하려면 선언해야 함, 초기화 해야함
	이미 선언한 변수에 다시 선언할 수 없다.

	연산자
	사칙연산
	나머지, 몫
	0,1 bit 연산자
	관계 연산자
*/


/*
	강화와 관련된 스토리
	강화가 성공된 후에 무기의 공격력이 어떻게 변환되었는지

	printf(강화 후 무기의 공격력이 N이 되었습니다.)
*/
#include <stdio.h>

int main() {
	int w_level = 0;
	int up_level = 3;
	int w_AP = 10;
	float success_0 = 100;
	float fail_0 = 0;
	//float probability;

	printf("[%s] + %d\n", "초심자의 검", w_level);
	printf("0 -> 1 강화확률 [성공 : %f, 실패 : %f]\n", success_0, fail_0);
	printf("강화 시도\n");
	printf("강화 성공 [%s] + %d \n", "초심자의 검", w_level + 1);

	printf("무기의 공격력 = 기본 공격력 + (무기 강화 레벨 + 무기 강화 레벨) * 3\n");
	printf("강화 전 무기 공격력 %d\n", w_AP);
	w_level=1;
	w_AP = w_AP + (w_level + w_level) * up_level;
	printf("강화 후 무기 공격력 %d\n", w_AP);

	/*
		int basicPower = 10;
		int weaponlevel = 0;
		int growPower = 3;
		센세의 노하우
		변수의 이름 규칙
		1. 변수의 시작 이름에 숫자가 들어가면 안된다.
		2. 이름에 특수기호가 들어가면 안된다.
		3. 언더바, 알파벳, 숫자
		4. 이름 사이에 공백문자가 들어갈 수 없음
		5. 예약어는 이름으로 사용할 수 없음
		어.. 정처기?
	*/

	//예제1
	// 사각형의 넓이를 구하는 문제
	// 단, 정수형으로

	int width=3, height=6;
	printf("예제1 : 사각형의 넓이를 구하시오\n(가로 : 3, 세로 : 6)\n");
	printf("사각형의 넓이 : %d\n", width * height);

	// 사용자 입력을 받아서 문제를 풀어보기
	printf("예제2\n가로 입력\n");
	scanf_s("%d", &width);
	printf("세로 입력\n");
	scanf_s("%d", &height);
	printf("사각형의 넓이 : %d\n", width * height);

	//예제3
	//무기 공격력 공식에 사용자 입력 받아서 적용 ㄱㄱ
	int check;
	up_level, w_level = 0; //초기화
	w_AP = 10;
	printf("[%s]+%d\n", "초심자의 검", w_level);
	printf("강화확률 [성공 : %f, 실패 : %f]\n", success_0, fail_0);
	printf("얼마나 강화 할래?(숫자만 입력)\n");
	scanf_s("%d", &check);
	printf("강화 성공 [%s]+%d 강 \n", "초심자의 검", w_level + check);

	printf("무기의 공격력 = 기본 공격력 + (무기 강화 레벨 + 무기 강화 레벨) * 3\n");
	printf("강화 전 무기 공격력 %d\n", w_AP);
	w_level = check;
	w_AP = w_AP + (w_level + w_level) * up_level;
	printf("강화 후 무기 공격력 %d\n", w_AP);
}