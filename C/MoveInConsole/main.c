#include "border.h"
#include "random.h"

#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

// 커서 : output 결과를 출력하는 위치를 안내해주는 안내 기호.
// (x,y)커서를 옮기기

void setCursorPos(int x, int y) {
	COORD pos = { x, y }; //구조체
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//Windows.h lib에서 제공됨
}

/*
	도전 과제
	플레이어의 시작 위치를 설정
	좌표에 대한 감각을 익혀보세요
	setCursorPos << 이용해서 원하는 위치에 플레이어 배치 
	이동은?
	int posX posY << 이용해서 위치를 이동시켜보센
*/

/*
	커서 숨기기
	true : 보이는 상태, false : 안 보이는 상태
*/
void setCursorVisible(bool enable) {
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;	// 이 친구 까지 해줘야 적용이되네..
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

bool GameOver = false;
int CurrentScore = 0;
int randomX = 0;
int randomY = 0;
int finishX = 6, finishY = 8;
int playTime = 0;
int questItemPosX = 8, questItemPosY = 4;

bool IsQuest = false;

int main() {

	ShowBorder();
	CreateRandomSeed();
	setCursorVisible(false);	// 커서 제어

	int playerX = 2;	// x의 값 +1 >> 오른쪽으로 1칸 이동. 화면상에서는 2칸씩해야 경계선에 보이는 것처럼 이동
	int playerY = 1;	//y의값 +1 할수록 아래로 1칸 내려간다.

	randomX = ReturnPosX();
	randomY = ReturnPosY();

	//플레이어가 시작할 때 등장함.
	//printf("▢◻□");
	setCursorPos(questItemPosX, questItemPosY);
	printf("Q");
	setCursorPos(randomX, randomY);
	printf("S");
	setCursorPos(finishX, finishY);
	printf("F");
	setCursorPos(playerX, playerY);
	printf("□"); //현재 커서 위치에 ""문자를 출력한다.

	//게임이 바로 종료되지 않도록 Loop만든다.
	//반복적으로 실행되는 부분
	while (1) {
		if (_kbhit()) {
			setCursorPos(playerX, playerY);
			printf("  ");

			//화살표 입력 인식

			//가상 키보드 & 비트 연산 해서 true일 시
			if (GetAsyncKeyState(VK_UP) & 0x8000) {
				//위
				//언제 적용할까? 입력 받았을 떄? 아니면 이동할 떄?
				playerY -= 1;
				if (playerY <= 0) {
					playerY = 1;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
				//아래
				playerY += 1;
				if (playerY >= 10) {
					playerY = 9;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
				//좌
				playerX -= 2;
				if (playerX <= 0) {
					playerX = 2;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
				//우
				playerX += 2;
				if (playerX >= 18) {
					playerX = 16;
				}
			}
			else
			{
				// x,y 좌표가 그대로
			}
		}

		//printf("현재 좌표(테스트) : %d, %d\n", playerX, playerY);
		//system("cls");	//test
		//ShowBorder();		//test
		setCursorPos(playerX, playerY);
		printf("□");
		
		/*
			0307
			UI 코드
		*/
		setCursorPos(63, 0);
		printf("Score");
		setCursorPos(60, 1);
		printf("현재 점수 : %d", CurrentScore);

		// 시간 제어 코드
		playTime++;
		//int hour = playTime / 360;
		int minute = playTime / 60;
		int second = playTime % 60;

		setCursorPos(60, 4);
		printf("플레이 시간 : %02d : %02d", minute, second);

		if (IsQuest) {
			setCursorPos(60, 5);
			printf("퀘스트 진행중");
		}

		Sleep(50); // 초 나누기 1000임

		//1. wait inputkey(특정 키를 눌렀을 때)
		//2. player X,Y 좌표값 변화
		//3. 해당 좌표로 커서를 위치를 바꾸고 printf
		//4. 

		//이동에 대한 이해
		/*
			1.처음에 한번만 실행되는 코드

			2. 계속해서 반복해서 실행되는 코드
		*/
		//break;

		//캐릭터가 특정 위치에 도달하면 gameover -> true가 되도록 하자
		
		if (playerX == randomX && playerY == randomY) {
			CurrentScore++;
			randomX = ReturnPosX();
			randomY = ReturnPosY();
			
			setCursorPos(randomX, randomY);
			printf("S");

			setCursorPos(60, 6);
			printf("생성 좌표 : (%d,%d)", randomX, randomY);
		}

		if (playerX == questItemPosX && playerY == questItemPosY) {
			IsQuest = true;
		}

		if (CurrentScore == 10) {
			//break;
		}

		if (playerX == finishX && playerY == finishY) {
			/*printf("끝! 행운 점수 확인");
			break;*/
		}
		
		if (GameOver) {
			printf("GameOver\n");
			break;
		}
	}

	//게임 종료
}