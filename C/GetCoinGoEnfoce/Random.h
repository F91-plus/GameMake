#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int D_ReturnPosX();
int D_ReturnPosY();
int D_CreateItem_X();
int D_CreateItem_Y();
void D_CreateRandomSeed();

int E_ReturnRandomValue();
bool E_CheckRandomFunc(int percent);

int Q_count();