#include "mcu.h"

MCU::MCU(uint16_t memSize, uint16_t flashSize)
{
    _mem = new Memory(memSize);
    _flash = new Memory(flashSize);

    _maxPC = flashSize;
}

void MCU::execute(int numInstr)
{
    for(int i = 0; i < numInstr; i++)
    {
        execute(_flash->getWord(_PC));
        incrPC();
    }
}

void MCU::writeProgMem(uint16_t location, uint8_t* data, uint16_t length)
{
    if(location + length <= _maxPC)
    {
        for(uint16_t i = 0; i < length; i++)
        {
            _flash->put(location+i, data[i]);
        }
    }
}

void MCU::execute(uint16_t instr)
{
    uint8_t dst;
    uint8_t src;

    int i = decode(instr);
    switch(i)
    {
        case LDI:
            _mem->put(((instr>>4) & 0x000f)+16, ((instr>>4)&0x00f0)|(instr & 0x000f));
            break;
        case ADD:
            dst = _mem->getByte((instr&0x01f0)>>4);
            src = _mem->getByte(((instr&0x0200)>>5) | (instr&0x000f));
            _mem->put((instr&0x01f0)>>4, src + dst);
            break;
        case SUB:
            dst = _mem->getByte((instr&0x01f0)>>4);
            src = _mem->getByte(((instr&0x0200)>>5) | (instr&0x000f));
            _mem->put((instr&0x01f0)>>4, dst - src);
            break;
    }
}

void MCU::incrPC()
{
    _PC += 2;
    _PC = _PC % _maxPC;
}

uint8_t MCU::getMem(uint16_t address)
{
    return _mem->getByte(address);
}
