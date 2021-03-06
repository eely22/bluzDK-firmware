/**
 Copyright (c) 2015 MidAir Technology, LLC.  All rights reserved.
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation, either
 version 3 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

/* Includes ------------------------------------------------------------------*/
#include "eeprom_hal.h"


void HAL_EEPROM_Init(void)
{
}

size_t HAL_EEPROM_Length()
{
    return 0;
}

uint8_t HAL_EEPROM_Read(uint32_t address)
{
    return 0;
}

void HAL_EEPROM_Write(uint32_t address, uint8_t data)
{
}

void HAL_EEPROM_Get(uint32_t index, void *data, size_t length)
{
}

void HAL_EEPROM_Put(uint32_t index, const void *data, size_t length)
{
}

void HAL_EEPROM_Clear()
{
}

bool HAL_EEPROM_Has_Pending_Erase()
{
    return false;
}

void HAL_EEPROM_Perform_Pending_Erase()
{
}
