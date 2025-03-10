#include "Console.h"

void SetColor(unsigned char _BGColor, unsigned char _TextColor)
{
	// 0000(BG) 0000(TextColor) 1 char을 4씩 나눠서 효율적으로 사용하겠다.
	if (_BGColor > 15 || _TextColor > 15) return; // 1000 1000

	// 0000 1000을 왼쪽 0000에 이동시킨다. 2를 곱하면 옆으로 한칸씩 이동한다
	unsigned short ColorNum = (_BGColor << 4) | _TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
	//WORD : 1바이트 값 안에 들어가는 숫자 단위

}
