

MEMORY
{
    APP_FLASH (rx) : ORIGIN = 0x00037000, LENGTH = 0x05000
    RAM (rwx)  : ORIGIN = 0x20007000, LENGTH = 0x1000
}

INCLUDE ../system-part1/module_system_part1_export.ld
INCLUDE module_user_export.ld
INCLUDE user.ld
