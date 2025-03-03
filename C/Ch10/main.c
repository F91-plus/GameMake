/*
	작성일 : 2025.02.28
	작성자 : 손용민
	주제 : 함수의 사용법
*/

/*
	함수 : input 전달 output 반환(리턴)한다.
			A			B
	A데이터 어딘가에 전달하여 B라는 결과값으로 반환한다.

	A, B
	어딘가	: 함수의 이름 작성
	전달	: 호출된 함수 위치

	void Upgrade(){}
	1. void		: 반환 형태 = B변수 결과 값 타입을 정의한다, 반환값이 없다.
	2. Upgrade	: 함수의 이름
	3. ()		: A변수 타입을 정의하는 곳. 아무 것도 없으면 void타입이다.
	4. {}		: 코드가 정의되는 부분. body

	void 형태 반환 형태에서는 생략이 안되는데, 매게 변수에 해당하는 생략을 할 수 있는 이유?
	Upgrade(){}

	반환값의 형태 -> 없으면 void, 있으면 int
*/

#include <stdio.h>
#include <stdbool.h>

int currentMoney = 100;

// 아이템의 가치가 amount, 구입할 수 있는지 없는지
// 조건문으로 두 코드를 나누어서 구현하려고 한다.
// 비교 연산자 : 내가 가진돈 < 아이템의 가치 = 부족 -> false
bool IsMoneyEnough(int amount) {
	return currentMoney >= amount ? true : false;
}

void BuyItem(int price) {
	if (IsMoneyEnough(price)) {
		printf("구매 완료");
	}
	else
	{
		printf("구매 불가능");
	}
}

void Example() {
	printf("ex\n");
}

int MultiplyNumber(int input) {
	int a = 10;
	return 10 * input;
}

int main() {
	Example();
	
	int result = MultiplyNumber(5);
	printf("%d\n", result);

	BuyItem(10);
}