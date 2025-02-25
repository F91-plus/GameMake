/*
	작성일 : 2025.02.25
	작성자 : 손용민
	주제 : 코드의 흐름 제어 - 반복문
*/

/*
	반복문
	for, while

	for( ; ; )
	//조건 참, 거짓
	//조건이 참일 떄만 반복문을 실행하고 거짓일 때는 반복문을 벗어난다.
	//반복 시 조건을 변형
	while ()
*/
#include<stdio.h>
#include<stdbool.h>

int main() {
	printf("반복문 예제1 \n");
	// A이름의 아이템을 획득 - 개수
	int A_count = 0;

	for (int i = 0; i < 10; i++) {
		A_count += 1;
	}

	printf("A item count : %d\n", A_count);

	printf("for 반복문 예제2\n");
	int B_count = 0;
	for (int j = 0; j < 10; j++)
	{
		B_count = B_count + j;
	}
	printf("B item count : %d\n", B_count);

	printf("예제3\n");
	for (int k = 10; k > 0; k--)
	{
		printf("%d\n", k);
	}

	// 무기 강화 스토리 작성 해보자
	int level = 0, basic_AP = 10, weight = 3, w_AP = 0;
	char check = ' ';

	for (;;) {
		// 무기 강화 시작
		/*
			무기 기본 정보
			이름
			레벨
			기본 공격력, 레벨, 가중치
			강화 식 = 기본 공격력 + 레벨 x 가중치
		*/
		level++;
		w_AP = basic_AP + level * weight;
		printf("강화 시작\n");
		printf("강화 성공\n");
		printf("%s + [%d]\n", "뉴비 검", level); // %s, 이름을 변수로 바꾸는 방법을 안배워서 안한다.
		printf("공격력 : %d\n", w_AP);

		// 강화를 계속 할지 안할지 확인
		for (;;)
		{
			printf("강화 계속 하실? (Y/N)\n");
			scanf_s("%c", &check, 1); //마지막에 자릿수 인듯
			while (getchar() != '\n');//scanf_s 오류? c에서만?

			if (check == 'Y' || check == 'y') {
				check = ' ';
				break;
			}
			else if (check == 'N' || check == 'n') {
				break;
			}
			else {
				printf("잘못된 값을 입력함\n");
				check = ' ';
				//함수문으로 강화 확인 문으로 돌아가야함
				//추후 배우면서 진행한다고 함
				//함수로 하면 재호출해서 할껀데 함수없이 되나?
				//포인트 즉... 저장지점 설정해줘야 될 거 같은데
			}
		}
		
		if (check == 'N' || check=='n') break;
		
	}

	// 반복문을 사용한다.
	// for반복문 사용해서
	// n번 반복하는 코드를 쉽게 표현하기 위해서
	// 몇 번 반복해야 할지 잘 모르겠는 내용이 있다.
	// 예시) 잘못된 값 입력 시 정확한 값 요구하는 코드

	// while 반복문
	int xi = 0;

	while (xi < 10) {
		xi++;
		printf("xi 값 : %d\n", xi);
	}

	// for반복문 표현 <-> while반복문 표현하기
	// 1부터 10까지의 값을 print 출력
	// for반복문, while반복문
	// 반복 횟수가 정해져 있으면 for반복문이 편함?
	// 반복 횟수를 잘 모를때 while 반복문이 편하다?

	int C_count = 0, C_num = 0;
	while (true) { //조건을 if문으로 사용해도 된다.
		C_num += 2;
		C_count++;

		printf("반복한 수 : %d\n", C_count);
		printf("현재 값 : %d\n", C_num);
		break;
	}

	return 0;

}