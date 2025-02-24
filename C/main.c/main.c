/*
	작성일 : 2025.02.24
	작성자 : 손용민
	주제 : 코드의 흐름 제어
*/

/*
	main 함수는 프로그램의 시작점
	위에서 부터 순서대로 코드가 실행됨
	main 함수의 마지막 중괄호를 만나면 프로그램이 종료된다.
	디버깅 : 프로그램을 중단시켜서 코드를 확인하는 기능
	- F9 중단점 생성 또는 삭제
	- F11 중단점 부터 하나씩 실행
	
	조건문, 분기, branch 라고도 하고요
	if() {}
	() : 조건
	{} : 몸체, body

	주의할 점
	if();{}
	- 결과 : 조건문 상관없이 코드가 실행됨
		- 헐..?
	->해석하자면 if(15<10); => if(15<10){} 뜻과 같음
	그래서 아래에 있는 {} 에 있는 것은 그냥 사용되는 걸로 인식이 됨

	if(조건1)
	짝수 : n%2 == 0
	홀수 : n%2 == 1

	else if -> 위 조건이 아닌 이러한 조건
	else -> 나머지 모든 것들

	점수를 기준으로 일정 점수 이상이면 'N' 등급을 메기는 시스템
	점수 >= 100 : S 등급
	점수 >= 90 : A 등급
	점수 < : bye

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("조건문 예제\n");

	//int가 보이면? : 정수 저장하는 변수 + 4바이트 크기
	int count = 15;

	if (count < 10) {// true, false
		printf("count 값이 10보다 작다\n");
	}
	else {
		printf("캭 퉷!\n");
	}

	int recode = 99;
	if (recode == 100) {
		printf("S");
	}
	else if (recode >= 90 && recode < 100) {
		printf("A");
	}
	else {
		printf("B");
	}

	//숫자 게임
	//랜덤한 숫자
	//조건문 확인해서 내가 입력한 숫자와 비교 크다 작다 출력
	
	srand(time(NULL)); // rand 함수에 무작위의 시드값을 주기 위한 함수
	// time(NULL) : 1970년 1월 1일 이후 경과된 시간을 초 단위로 반환하는 함수
	// 1초 단위로 매번 다른 시드값을 생성해 rand()함수를 호출함
	int input;
	int com_input;
	com_input = rand() % 9; // 0~8, 0 ~ 32767까지 가능,  srand가 없을 시 패턴이 일정한 단점
	//com_input = rand() % 9+1; // 1~9

	printf("원하는 숫자 입력하셈 ㄱㄱ0~9");
	scanf_s("%d", &input);

	if (input > com_input) {
		printf("큼\n");
		printf("컴 : %d\n", com_input);
	}
	else if(input == com_input) {
		printf("같다\n");
		printf("컴 : %d\n", com_input);
	}
	else
	{
		printf("작음");
		printf("컴 : %d\n", com_input);
	}

	// 예제 문제2
	// 숫자 맞추기 게임에서 문제를 맞춘 횟수에 따라서 랭킹을 부여
	// if 문 사용
	int if_num_ex2_count = 1;

	if (if_num_ex2_count == 1) {

	}
	// switch 문 사용
	int switch_num_ex2_count = 1;
	switch (switch_num_ex2_count)
	{
		case 1: 
		case 2: 
			printf("good");
			break;
		case 3: 
			printf("3");
			break;
		case 4:
			printf("4");
			break;
		default:
			break;
	}

	// 점수 비교 랭킹, 횟수 기준 랭킹
	// 랭킹을 부여할 수 있는 스토리를 작성
	// 조건문 사용

	if (recode == 100) {
		printf("S");
	}
	else if (recode >= 90 && recode < 100) {
		printf("A");
	}
	else if (recode >= 80 && recode < 90) {
		printf("B");
	}
	else {
		printf("다시 해");
	}


	return 0;
}