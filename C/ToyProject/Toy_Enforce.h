#pragma once

// menoy system 구현
// enfoce system 구현

#include <stdio.h>	// 입출력 함수를 포함하는 헤더
#include <stdbool.h>
#include <conio.h>	// _getch() 입력 버퍼 없이 입출력 함수를 포함하는 헤더
#include <Windows.h>	// system("cls") window console function
#include <stdlib.h>	// rand() function header
#include <time.h>	// time() function header
#include "Random.h"	// 업그레이드 확률, 사용자 정의 헤더
#include "Currency.h"	// (강의용) 업글 비용

void ShowMenu();

// Showmenu에 따른 설정 함수
void Upgrade();
void ShowStatus();

// 게임 종료 조건
// 목표 달성 시 - 성공
bool ToyGameClear();

// 소지금 전부 소비 시 - 실패

// 전역 변수
extern int CurrentLevel;
extern int MissionLevel;
extern int Coin;
extern int W_AP;
extern bool MissionCheck;
extern bool CoinCheck;