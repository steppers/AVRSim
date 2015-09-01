#include "memory.h"

Memory::Memory(uint16_t memSize)
{
    _data = new uint8_t[memSize];
}

Memory::~Memory()
{
    delete[] _data;
}

uint8_t Memory::getByte(uint16_t address)
{
    return _data[address];
}

uint16_t Memory::getWord(uint16_t address)
{
    return (((uint16_t)_data[address+1])<<8) | (uint16_t)_data[address];
}

void Memory::put(uint16_t address, uint8_t data)
{
    _data[address] = data;
}
