#include "Intro.h"
#include "Play.h"

bool GameStart = false;

void L_ShowGameMenu()
{
	int IntroX = 20;
	int IntroY = 3;

	I_setCursorVisible(false);

	printf("============================================================\n");
	printf("\t\t\tGAME\n");
	printf("============================================================\n");
	printf("\t\t\tStart\n");
	printf("\t\t\tExit\n");

	I_setCursorPos(IntroX, IntroY);
	printf(">");

	while (true)
	{
		if (_kbhit()) {
			I_setCursorPos(IntroX, IntroY);
			printf(" ");

			if (GetAsyncKeyState(VK_UP) & 0x8000) {
				IntroY -= 1;
				if (IntroY < 3) {
					IntroY = 3;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
				IntroY += 1;
				if (IntroY > 4) {
					IntroY = 4;
				}
			}
			if (GetAsyncKeyState(VK_RETURN)) {
				if (IntroY == 3) {
					printf("게임 시작");
					GameStart = true;
					break;
				}
				else
				{
					printf("게임 종료");
					break;
				}
			}
		}
		else
		{

		}
		
		
		/*I_setCursorPos(20, 30);
		printf("현재 좌표(테스트) : %d, %d\n", IntroX, IntroY);*/

		I_setCursorPos(20, IntroY);
		printf(">");

		Sleep(50);
	}
	if (GameStart) {
		Sleep(50);
		L_GameLoop();
	}

}

void I_setCursorPos(int x, int y)
{
	COORD I_pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), I_pos);
}

void I_setCursorVisible(bool enable) {
	CONSOLE_CURSOR_INFO I_cursorInfo;
	I_cursorInfo.bVisible = enable;
	I_cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &I_cursorInfo);
}