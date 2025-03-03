/*
	작성일 : 2025.02.27
	작성자 : 손용민
	주제 : 지역변수, 전역변수
*/

/*
	변수 : 변하는 수를 컴퓨터에 전달하기 위함

	지역(local) : 지역에 한 에서만 사용됨
	전역(global) : 전체적으로 사용됨

	1. 지역 변수가 전역 변수보다 먼저 사용된다.

	함수 내부에 선언 -> 지역 변수
	함수 외부에 선언 -> 전역 변수

	함수
	반환값 이름(){}
	{} 내부 = 지역변수
	{} 외부 = 전역변수

	지역, 전역 변수 이름이 같아도 에러가 발생하지 않고 구별이됨
	메모리 - 저장하는 공간이 구분이 되어 있다
	코드 영역 - 데이터 영역 - 힙 영역 - 스택 영역

	전역 변수는 데이터 영역
	지역 변수는 스택 영역에 저장이된다.
	저장되는 영역이 다르기 때문에 컴퓨터가 구별할 수 있다.

	지역 변수의 특징
	- 함수 내부에서 선언된다.
	- 함수가 종료되는 시점에 변수가 소멸됨

	전역 변수의 특징
	- 함수 외부에서 선언된다.
	- 프로그램이 종료되는 시점에 변수가 소멸됨

	변수가 소멸되는 시점이 다른 이유?
	- 지역에서만 사용한다? 저장? -> 저장 효율을 위해서
	>> 메모리를 효율적으로 사용하기 위해서

	사용한 공간을 지워서 다시 만든다.
	=> 함수가 종료되면 안쓰는 메모리를 지운다.

	전역 변수 | main 함수 | LocalFunc 함수
	number	  | number	  | value
	3			2			1		(소멸순서)
*/

/*
	2교시
	call by value vs reference -> 지역변수의 차이점을 깊이 있게 알수있다.

	lecture.h, lecture.c 생성해서 코드 분할
	ShowExample() 함수로 이동시킴

	업그레이드 시스템
	- menu // 1번, 2번, 강화 종료

*/

/*
	02.28
	내가 가진 돈의 정보를 보여줘
*/

#include "lecture.h"
#include "Upgrade.h"
#include "CurrentMonsy.h"
#include "main.h"

int number=1;
int CurrentMoney = 50;

void ShowInfo() {
	printf("캐릭터의 클래스 %s\n", "모험가");
	printf("현재 가진 돈 : %d\n", CurrentMoney);

	WaitInputKey();//추출할 코드를 드래그 후 우클릭 - 간편 작업 - 함수추출
}

void WaitInputKey()
{
	printf("아무 키를 입력하시요.");
	_getch();
}

int main() {
	ShowInfo();
	system("cls");
	//ShowExample();// 오늘 배운 수업 내용들
	ShowUpgradeMenu();// 무기강화
}