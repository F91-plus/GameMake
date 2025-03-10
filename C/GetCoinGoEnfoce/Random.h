#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int D_ReturnPosX();
int D_ReturnPosY();
void D_CreateRandomSeed();

int E_ReturnRandomValue();
bool E_CheckRandomFunc(int percent);
