#ifndef __BUZZER_H__
#define __BUZZER_H__

#include "sc32f1xxx_gpio.h"   // GPIO库
#include "sc32f1xxx_rcc.h"    // 时钟库
#include "system_sc32f1xxx.h" // 系统时钟（延时用）

// 蜂鸣器引脚：PC9（从原理图确认）
#define BUZZER_GPIO     GPIOC
#define BUZZER_PIN      GPIO_Pin_9

// 函数声明
void Buzzer_Init(void);                     // 初始化
void Buzzer_On(void);                       // 打开
void Buzzer_Off(void);                      // 关闭
void Buzzer_Beep(uint16_t duration_ms);     // 嘀一声
void Buzzer_PlayMelody(void);               // 小星星

#endif /* __BUZZER_H__ */
