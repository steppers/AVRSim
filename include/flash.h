#ifndef FLASH_H
#define FLASH_H

#include <stdint.h>

class Flash
{
    public:
        Flash(uint16_t memSize);
        ~Flash();

        uint16_t get(uint16_t address);
        void put(uint16_t address, uint8_t data);

    private:
        uint8_t* _data;
};

#endif // FLASH_H
