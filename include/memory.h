#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

class Memory
{
    public:
        Memory(uint16_t memSize);
        ~Memory();

        uint8_t getByte(uint16_t address);
        uint16_t getWord(uint16_t address);
        void put(uint16_t address, uint8_t data);
        void putWord(uint16_t address, uint16_t word);

    private:
        uint8_t* _data;
};

#endif // MEMORY_H
