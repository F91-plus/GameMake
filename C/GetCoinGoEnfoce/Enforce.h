#pragma once

/*
	�������� ��ȭ �Ϸ� ���Ծ��
	��ȭ ȭ���� ���������
	1. �Ϲ� ��ȭ
	2. ����Ʈ �Ϸ� �� ��� ��ȭ
	3. ��ȭ Ȯ��?
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