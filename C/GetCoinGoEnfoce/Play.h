#pragma once

/*
	마을의 크기
	20x20
*/

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include "Intro.h"
#include "Enforce.h"

extern int L_playerX, L_playerY;

extern void I_setCursorPos(int x, int y);
extern void I_setCursorVisible(bool enable);

void L_GameLoop();
void ShowVillage();
void ShowLoading();
void ResetText();