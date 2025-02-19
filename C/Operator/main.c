/*
	작성일 : 2025.02.14
	작성자 : 손용민
	주제 : 연산자 실습
*/

/*
	단항 연산자
	부호 +, -	 -10, +10

	이항 연산자
	num1 + num2

	삼항 연산자
	? 1항 = 2항 : 3항

	사칙연산 : + - * / %
*/

/*
	시프트 연산자 >>, <<
	관계 연산자	>, <, ==
	비트 연산자 ^ | 
	논리 연산자 !
*/

/*
	비교 연산자 결과 : 참(true) 1, 거짓(false) 0
*/

/*
	#include <> -> 시스템 정의 파일
	#include "" -> 사용자 정의 파일
*/

#include <stdio.h>
#include <stdbool.h>
#include "Test.h"

int main() {
	printf("연산자 실습\n");

	int num1 = 10;
	int num2 = 3;

	//덧셈
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//뺄셈
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//곱셈
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//나누기
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//나머지
	printf("%d 나머지 %d = %d\n", num1, num2, num1 % num2);

	printf("%d > %d : %d \n", num1, num2, num1>num2);
	printf("%d > %d : %d \n", num1, num2, num2 > num1);

	
	bool istrue = true;
	bool isfalse = false;

	int result1 = num1 > num2;

	printf("삼항 연산자 결과 출력 : %s\n", result1 ? "true" : "false");
	printf("삼항 연산자 결과 출력 : %d\n", result1 ? 1 : 0);

	// !num2 : num2가 아니다(부정) false -> true // true -> false

	printf("관계 연산자 : %d\n", num1 != num2);

	printf("관계 연산자 : %d\n", (num1 != num2) || (num1 < num2));
	printf("관계 연산자 : %d\n", (num1 != num2) && (num1 < num2));
	//printf("\n");

	printf("복합 연산\n");
	int num3 = 3;
	int num4 = 4;
	
	num3 += num4; //7

	num3++; //7 출력 이후 8 printf에 쓴다면
	++num4; //5

	//게임의 스토리
	//무기를 강화하는데
	//n강일 때의 무기, n+1 무기의 정보를 화면에 출력
	printf("============ 스토리 1 ============\n");
	int select;
	int basic = 3, total1 = basic, total2=0;
	printf("확인하고 싶은 무기 강화 정보를 입력(0~9): ");
	scanf_s("%d", &select);
	total1 = (basic + select) * select;
	total2 = (basic + select+1) * select+1;
	printf("입력 +%d강화 정보 : %d\n", select,total1);
	printf("다음 +%d강화 정보 : %d\n", select+1,total2);


	//2
	// 아이템 인벤토리, Slot, 기타 아이템 수집, Stack * 개수
	// Slot 최대 개수 : 변수
	// Stack 최대 개수 : 변수
	// A아이템을 n개 횟득, B아이템 m개 획득
	// 현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현
	// 3항 연산자
	printf("============ 스토리 2 ============\n");
	int Slot=3, Stack=3;
	int item_A, item_B;
	int item_box = Slot * Stack;
	int item_AB;
	printf("현재 인벤토리 칸은 %d칸입니다.\n", item_box);
	printf("획득 하신 아이템A의 개수를 입력 : ");
	scanf_s("%d", &item_A);
	printf("획득 하신 아이템B의 개수를 입력 : ");
	scanf_s("%d", &item_B);
	item_AB = item_A + item_B;
	item_box >= item_AB ?
	printf("남은 인벤토리 칸 : %d\n", item_box-item_AB) : printf("현재 인벤토리에 넣을 공간이 없습니다.\n");

	//3
	//사용자 정의 스토리 작성
	//현재 무기로 몇번을 떄려야 몬스터를 잡을 수 있을까?
	printf("============ 스토리 3 ============\n");
	int monster = 100;
	int ap = 0, total_ap=0;
	printf("몬스터의 체력 : 100\n");
	printf("몇 번 공격을 할까요?");
	scanf_s("%d", &ap);
	total_ap = ap * total1;
	monster < total_ap ?
		printf("몬스터 처치\n") : printf("몬스터 처치 실패, 남은 체력 : %d\n", monster - total_ap);
}
