#pragma once

/*
	마을에서 강화 하러 들어왔어요
	강화 화면을 보여줘야해
	1. 일반 강화
	2. 퀘스트 완료 후 얻는 강화
	3. 강화 확률?
*/

#include <stdbool.h>
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "Random.h"
#include "Intro.h"
#include "Play.h"

extern int L_Coin, L_QuestCoin;
extern int W_level;

bool GoVillage;

void L_Enforce();
void L_ShowEnforce();
void L_NormalEnforce();
void L_SuperEnforce();

void Enforce_ResetText();