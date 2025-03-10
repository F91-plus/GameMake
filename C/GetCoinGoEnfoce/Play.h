#pragma once

/*
	������ ũ��
	20x20
*/

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include "Intro.h"
#include "Enforce.h"
#include "Random.h"
#include "Dungeon.h"
#include "Console.h"

extern void SetColor(unsigned char x, unsigned char y);

extern int L_playerX, L_playerY;
extern int Q_count();

extern void I_setCursorPos(int x, int y);
extern void I_setCursorVisible(bool enable);

int q_count;	// ����Ʈ ���� �� �����ϰ� ��ǥ ���� ����
int q_clear;	// ����Ʈ Ŭ���� Ƚ��
int q_item;		// �������� ���� ����Ʈ ������

void L_GameLoop();
void ShowVillage();
void ShowLoading();
void ResetText();
