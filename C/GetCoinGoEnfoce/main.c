/*
0. 메인 화면 만들까?
1. 네모난 마을이 있음
2. 마을에는 퀘스트, 강화 장소, 던전이 있음
3. 퀘스트 수령 후 던전에 갈 수 있음
4. 던전은 네모난 공간인데 매번 들어갈 때마다 크기가 다름
5. 던전에서 난수로 생성되는 수집품이 있음 이것을 퀘스트에 해당되는 만큼 모으면 퀘스트 완료
6. 완료하면 강화할 수 있는 재화를 받음
7. 받은 재화로 무기 강화 장소로 가서 강화를 시작함
8. 강화 시 강화 확률이 존재함
9. 총 5번 강화를 성공하면 게임 클리어
*/

#include "Intro.h"
#include "Play.h"
#include "Enforce.h"

int L_playerX = 2, L_playerY = 8; //플레이어 시작 위치 설정
int L_Coin = 10;
int L_QuestCoin = 0;
int W_level = 0;

int main() {
	L_ShowGameMenu();
}