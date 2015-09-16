#include "avrschematic.h"

AVRSchematic::AVRSchematic(uint16_t flashSize, uint16_t eepromSize, uint16_t sramSize)
{
    _flashSize = flashSize;
    _eepromSize = eepromSize;
    _sramSize = sramSize;
}

AVRSchematic::~AVRSchematic()
{
    //dtor
}
