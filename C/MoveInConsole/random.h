#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CreateRandomSeed();

// ��� ���� ���� �ʿ��Ѱ�
// x ��ǥ(2~16, 2�� ���), y ��ǥ(1~9, 1�� ���)
int ReturnPosX();
int ReturnPosY();