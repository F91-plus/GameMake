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
#include "Random.h"
#include "Dungeon.h"
#include "Console.h"

extern void SetColor(unsigned char x, unsigned char y);

extern int L_playerX, L_playerY;
extern int Q_count();

extern void I_setCursorPos(int x, int y);
extern void I_setCursorVisible(bool enable);

int q_count;	// 퀘스트 수락 시 랜덤하게 목표 값이 생성
int q_clear;	// 퀘스트 클리어 횟수
int q_item;		// 던전에서 얻은 퀘스트 아이템

void L_GameLoop();
void ShowVillage();
void ShowLoading();
void ResetText();
