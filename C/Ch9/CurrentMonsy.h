#pragma once

#include <stdio.h>
#include <stdbool.h>

extern int CurrentMoney; 
//extern : �ܺο� CurrentMoney �̸��� ���� ������ ������ �װ��� ����ϼ���.
//��ǻ�ʹ� extern ��� ������ ���������� �˾Ƹ����� ������ �����ڰ� �򰥸� �� �ֱ� ������ �����ϰ� �� Ű����

bool IsEnoughMoney(int amount);

bool UseMoney(int price);