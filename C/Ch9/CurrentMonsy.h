#pragma once

#include <stdio.h>
#include <stdbool.h>

extern int CurrentMoney; 
//extern : 외부에 CurrentMoney 이름이 같은 변수가 있으니 그것을 사용하세요.
//컴퓨터는 extern 없어도 재정의 하지않으면 알아먹지만 협업시 개발자가 헷갈릴 수 있기 때문에 존재하게 된 키워드

bool IsEnoughMoney(int amount);

bool UseMoney(int price);