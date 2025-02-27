#include "lecture.h"

void ShowExample() {
	int number = 10;
	printf("지역number의 값 : %d\n", number);

	printf("전역number의 값 : %d\n", number);

	LocalFunc(10);// 생성과 소멸이 반복
	LocalFunc(10);//증가 시켜줬지만... 앞서 호출하고 나서 소멸이 되었기 때문에 같은 값이 나옴

	return 0;
}

void LocalFunc(int a) {
	int value = 5;
	printf("a+5 = %d\n", a + value);
	value += 100;
}