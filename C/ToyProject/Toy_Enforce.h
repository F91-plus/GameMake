#pragma once

// menoy system ����
// enfoce system ����

#include <stdio.h>	// ����� �Լ��� �����ϴ� ���
#include <stdbool.h>
#include <conio.h>	// _getch() �Է� ���� ���� ����� �Լ��� �����ϴ� ���
#include <Windows.h>	// system("cls") window console function
#include <stdlib.h>	// rand() function header
#include <time.h>	// time() function header

void ShowMenu();

// Showmenu�� ���� ���� �Լ�
void Upgrade();
void ShowStatus();

// ���� ���� ����
// ��ǥ �޼� �� - ����
bool ToyGameClear();

// ������ ���� �Һ� �� - ����

// ���� ����
extern int CurrentLevel;
extern int MissionLevel;
extern bool MissionCheck;
extern bool MoneyCheck;