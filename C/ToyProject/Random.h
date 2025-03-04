#pragma once

/*
	#include <stdlib.h>
	#include <time.h>
	srand(time(NULL)) : rand seed를 지정하는 함수
	rand() : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 1 ~ 100 랜덤하게 출력 (정수)
// 30% 성공 ( 1 ~ 100 ) 70 보다 크거나 같으면 성공한다.


// 함수 구조 -> A name(B)
// A : 반환값
// B : 매개변수

int ReutrnRandomValue();
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max);