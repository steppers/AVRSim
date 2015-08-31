#include "flash.h"

Flash::Flash(uint16_t memSize)
{
    _data = new uint8_t[memSize];
}

Flash::~Flash()
{
    delete[] _data;
}

uint16_t Flash::get(uint16_t address)
{
    return (((uint16_t)_data[address+1])<<8) | (uint16_t)_data[address];
}

void Flash::put(uint16_t address, uint8_t data)
{
    _data[address] = data;
}

