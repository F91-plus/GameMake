/*
	작성일 : 2025.02.21
	작성자 : 손용민
	주제 : 문자를 표현하는 방법, 데이터의 타입 변환
*/

/*
	정수, 실수
	정수를 표현하는 방법 - 부호비트 MSB - 2의 보수 - unsigned
	실수를 표현하는 방법 - MSB/가수/지수 - 10 = (0.1)
*/

/*
	많은 데이터형을 사용해야 한다.
	int, char, short, long
	float, double

	왜 미리 타입을 만들어 뒀을까?
	-> 편하게 사용할려고

	int : 정수 + 4바이트 : 
		각각의 비트는 0,1저장하고 마지막 비트 부호 저장 비트의 갯수 32개

	문자를 저장. 비트값을 저장. 0101 0101
	character 측면 -> 'a'
	정수 측면 -> 97

	숫자의 값 단어 매핑
	97 a, 98 b, 99 c ...
	ASCII (American Standard Code for information insitute)

	정수형 데이터 4바이트 이름을 'num' 선언을 하세요.
	int num;
	num = 10;
	num(int)

	literal 상수
	10 <- 정수 int
	11.5 <- 실수 double
	컴퓨터 입장에서 가장 보편적으로 많이 사용하는 타입으로 변환함

	심볼릭 상수 - 이름을 지정해줄 수 있다.

	형변환
	자동 - 묵시적
	수동 - 명시적

	명시적 변환하는 방법
	float fnum10 = 0.1f;
	int tempint = (int)fnum10
*/

#include<stdio.h>

int main() {
	int num1 = 10;
	char num2 = 1;
	short num3 = 5;
	printf("정수 데이터의 크기 비교\n");
	printf("데이터 바이트 크기 : %zd 바이트\n", sizeof(num1));
	printf("데이터 바이트 크기 : %zd 바이트\n", sizeof(num2));
	printf("데이터 바이트 크기 : %zd 바이트\n", sizeof(num3));

	float fnum1 = 0.1f;
	double dnum1 = 0.2;
	printf("실수 데이터의 크기 비교\n");
	printf("데이터 바이트 크기 : %zd 바이트\n", sizeof(fnum1));
	printf("데이터 바이트 크기 : %zd 바이트\n", sizeof(dnum1));

	printf("문자 출력\n");
	char c1 = 'F';
	printf("값 : %c\n", c1);
	printf("값 : %d\n", c1);

	// 128숫자 a~z, A~Z
	wchar_t charNum = L'가';
	printf("유니코드 값 : %d\n", charNum);

	printf("심볼릭 상수 예시\n"); //const 값이 변하지 않도록 함
	const double PI = 3.14;
	//PI = 3.1415;
	printf("값 : %.4lf\n", PI);

	printf("Ex1 원의 넓이 구해(PI : 3.14고정)\n");
	// 원의 넓이 = Pi * 반지름 * 반지름;
	int radius = 5;
	printf("원의 넓이 : %lf\n", PI * radius * radius);

	// ex2) 플레이어 요소
	// 체력, 공격력
	// 사망 체력 <= 0 이후 원래 체력으로 부활
	// 기본 체력으로 부활했다
	const int basic_hp = 10;
	int hp=10, atk = 10, count=0;
	printf("공격 당함 횟수는? : ");
	//scanf_s("%d", &count);
	hp = hp - atk * count;
	hp <= 0 ?
		printf("사망, 이후 %d체력으로 부활\n", basic_hp) : printf("살아있음\n");
	basic_hp <= atk * count ?
		printf("사망, 이후 %d체력으로 부활\n", basic_hp) : printf("살아있음\n");

	//명시적 변환
	float fnum10 = 0.1f;
	int tempint = (int)fnum10;

	printf("값 : %d\n", tempint);
	printf("값 : %f\n", (float)tempint);

	//묵시적 변환
	//case1. 대입 연산자를 사용할 때 두 변수의 타입이 다르면 발생.
	
	float fnum11 = 0.1f;
	int tempint2 = fnum10;

	printf("값 : %d\n", tempint2);
	printf("값 : %f\n", (float)tempint2);

	//case2. 정수의 승격에 의한 자동 형변환
	//char, short -> int변환 why? : 간단하게 컴터에서 빠르게 계산이 되는 형태로 바뀌고 있다
	// 상세하게는 난해한 설명이라고 함
	
	short ex1 = 15;// int로 변환
	short ex2 = 25;// int로 변환
	short ex3 = ex1 + ex2;// 15,25가 int -> short로 변환됨

	//case3. 연산자의 자료 불일치
	//공격력 = 기본공격력 + 레벨 * 가중치
	int bAP = 10, level = 1;
	double weight = 0.5;
	int AP = bAP + level * weight;
	//자료형이 일치하지 않은 상황임
	//정수 * 실수 => 실수
	//10 + 0.5 -> 10.5
	//(int)AP = (int)(double) 10.5;

	//case3-2. 자료형 불일치 (정수,실수) (정수,정수)
	int abc = 128;
	char ccc = abc; // -127

	// []x4 <- []x1 : [] [] [] []x1
	// []x4 -> []x1 : // [날] [라] [감] // []
	// 자료형을 변환할 때 데이터의 손실이 가장 적은 방향으로 변환이 된다.
	// [char -> short] -> int -> long -> float -> double
	// char, short는 예외적 case2. 로 설명



	return 0;
}