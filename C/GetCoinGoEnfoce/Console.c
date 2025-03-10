#include "Console.h"

void SetColor(unsigned char _BGColor, unsigned char _TextColor)
{
	// 0000(BG) 0000(TextColor) 1 char�� 4�� ������ ȿ�������� ����ϰڴ�.
	if (_BGColor > 15 || _TextColor > 15) return; // 1000 1000

	// 0000 1000�� ���� 0000�� �̵���Ų��. 2�� ���ϸ� ������ ��ĭ�� �̵��Ѵ�
	unsigned short ColorNum = (_BGColor << 4) | _TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
	//WORD : 1����Ʈ �� �ȿ� ���� ���� ����

}
