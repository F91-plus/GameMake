#pragma once

/*
	#include <stdlib.h>
	#include <time.h>
	srand(time(NULL)) : rand seed�� �����ϴ� �Լ�
	rand() : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 1 ~ 100 �����ϰ� ��� (����)
// 30% ���� ( 1 ~ 100 ) 70 ���� ũ�ų� ������ �����Ѵ�.


// �Լ� ���� -> A name(B)
// A : ��ȯ��
// B : �Ű�����

int ReutrnRandomValue();
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max);