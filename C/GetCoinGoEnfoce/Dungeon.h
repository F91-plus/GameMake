#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include "Intro.h"
#include "Enforce.h"
#include "Random.h"

extern int q_count;	// ����Ʈ ���� �� �����ϰ� ��ǥ ���� ����
extern int q_clear;	// ����Ʈ Ŭ���� Ƚ��
extern int q_item;


void D_Map(int D_x, int D_y);
void D_Play(int x, int y);

bool GoVillage_D;
/*
	�����ϰ� ���� ���� ������ŭ ������ ����
*/