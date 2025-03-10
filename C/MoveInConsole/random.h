#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CreateRandomSeed();

// 어떠한 랜덤 값이 필요한가
// x 좌표(2~16, 2의 배수), y 좌표(1~9, 1의 배수)
int ReturnPosX();
int ReturnPosY();