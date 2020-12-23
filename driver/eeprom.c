/**
  * EEPROM使用的是AT24C64
  */



#include "eeprom.h"
#include "main.h"



static I2C_HandleTypeDef * hi2c;
uint8_t devAddr_w = 0xA0;
uint8_t devAddr_r = 0xA1;

//uint8_t WriteBuffer[BufferSize], ReadBuffer[BufferSize];

void eepromInit(I2C_HandleTypeDef *i2c)
{
	hi2c = i2c;
}

bool eepromWrite(uint8_t address, void* data, size_t length)
{
	int status;

  status = HAL_I2C_Mem_Write(hi2c, devAddr_w, address, I2C_MEMADD_SIZE_16BIT, data, length, 100);

  if (status == HAL_OK)
    return true;

  return false;
}

bool eepromRead(int address, void* data, size_t length)
{
  int status;

  status = HAL_I2C_Mem_Read(hi2c, devAddr_r, address, I2C_MEMADD_SIZE_16BIT, data, length, 100);

  if (status == HAL_OK)
    return true;

  return false;
}




