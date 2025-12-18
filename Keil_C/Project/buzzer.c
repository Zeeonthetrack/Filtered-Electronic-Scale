#include "buzzer.h"

// 初始化：PC9推挽输出
void Buzzer_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    // 使能GPIOC时钟（用位或，如果有多个端口可以加）
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC, ENABLE);

    // 配置PC9
    GPIO_InitStructure.GPIO_Pin = BUZZER_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;  // 推挽输出（如果错，试GPIO_Mode_Out_OD）
    GPIO_Init(BUZZER_GPIO, &GPIO_InitStructure);

    // 默认关闭
    Buzzer_Off();
}

// 打开（高电平，三极管导通，蜂鸣器响）
void Buzzer_On(void)
{
    GPIO_SetBits(BUZZER_GPIO, BUZZER_PIN);
}

// 关闭（低电平）
void Buzzer_Off(void)
{
    GPIO_ResetBits(BUZZER_GPIO, BUZZER_PIN);
}

// 嘀一声
void Buzzer_Beep(uint16_t duration_ms)
{
    Buzzer_On();
    SC_Delay(duration_ms);
    Buzzer_Off();
}

// 小星星示例
void Buzzer_PlayMelody(void)
{
    uint16_t notes[] = {500, 500, 500, 500, 500, 500, 1000,
                        500, 500, 500, 500, 500, 500, 1000};
    uint8_t i;

    for (i = 0; i < sizeof(notes)/sizeof(notes[0]); i++)
    {
        Buzzer_Beep(notes[i]);
        SC_Delay(100);  // 间隔
    }
}
