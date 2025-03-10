#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>

bool GameStart;

void L_ShowGameMenu();
void I_setCursorPos(int x, int y);
void I_setCursorVisible(bool enable);
