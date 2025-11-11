#ifndef __BLINK_H
#define __BLINK_H

// HAL 라이브러리 사용을 위해 필요함
#include "main.h"

// LED 토글 기능 함수 선언
// 이 함수는 main.c 의 while(1) 루프에서 호출
void Blink_LED(void);

#endif /* __BLINK_H*/