#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include "Intro.h"
#include "Enforce.h"
#include "Random.h"

extern int q_count;	// 퀘스트 수락 시 랜덤하게 목표 값이 생성
extern int q_clear;	// 퀘스트 클리어 횟수
extern int q_item;


void D_Map(int D_x, int D_y);
void D_Play(int x, int y);

bool GoVillage_D;
/*
	랜덤하게 가로 세로 개수만큼 던전이 생성
*/