// 위에서 만든 헤더 파일 포함
#include "blink.h" 
#include "main.h"

// HAL 라이브러리를 사용하여 LED 토글 함수 정의
void Blink_LED(void)
{
    // 사용자 LED 포트와 핀에 맞게 수정
    // CubeMX에서 설정한 LED의 GPIO 포트와 핀 이름을 사용
    HAL_GPIO_TogglePin(LED_GPIO_Port,LED_Pin);
    HAL_Delay(1000); // 500ms ( 0.5s ) 지연 
}