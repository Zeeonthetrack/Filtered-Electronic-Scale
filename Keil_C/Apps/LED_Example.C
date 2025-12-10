#include "LED_Example.h"

void LED_Example(void)
{
  uint16_t i, j;

  while(1)
  {
    for(i = 0; i < 1000; i++)//自定义延时
    {
      for(j = 0; j < 2000; j++);
    }

    /* COM0~3 SEG4~7点亮 */
    LED_Write(LED_RAMRegister_8, 0xF0);//COM0~3 SEG4点亮
    LED_Write(LED_RAMRegister_9, 0xF0);//COM0~3 SEG5点亮
    LED_Write(LED_RAMRegister_10, 0xF0);//COM0~3 SEG6点亮
    LED_Write(LED_RAMRegister_11, 0xF0);//COM0~3 SEG7点亮
    LED_Write(LED_RAMRegister_12, 0xF0);//COM0~3 SEG4点亮
    LED_Write(LED_RAMRegister_13, 0xF0);//COM0~3 SEG5点亮
    LED_Write(LED_RAMRegister_14, 0xF0);//COM0~3 SEG6点亮
    LED_Write(LED_RAMRegister_15, 0xF0);//COM0~3 SEG7点亮

    for(i = 0; i < 1000; i++)//自定义延时
    {
      for(j = 0; j < 2000; j++);
    }

    /* COM0~3 SEG4~7熄灭 */
    LED_Write(LED_RAMRegister_8, 0x00);//COM0~3 SEG4熄灭
    LED_Write(LED_RAMRegister_9, 0x00);//COM0~3 SEG5熄灭
    LED_Write(LED_RAMRegister_10, 0x00);//COM0~3 SEG6熄灭
    LED_Write(LED_RAMRegister_11, 0x00);//COM0~3 SEG7熄灭
    LED_Write(LED_RAMRegister_12, 0x00);//COM0~3 SEG4点亮
    LED_Write(LED_RAMRegister_13, 0x00);//COM0~3 SEG5点亮
    LED_Write(LED_RAMRegister_14, 0x00);//COM0~3 SEG6点亮
    LED_Write(LED_RAMRegister_15, 0x00);//COM0~3 SEG7点亮
  }
}

