#ifndef MCU_H
#define MCU_H

#include "memory.h"
#include "flash.h"

class MCU
{
    public:
        MCU(uint16_t memSize, uint16_t flashSize);

        void execute(int numInstr);

        void loadProgramMem(uint16_t location, uint8_t* data, uint16_t length);
        uint8_t getMem(uint16_t address);

    private:
        //Memory Spaces
        Memory* _mem;
        Flash* _flash;

        //Program Counter
        uint16_t _PC = 0x0000;
        uint16_t _maxPC;
        void incrPC();

        void execute(uint16_t instr);
};

#endif // MCU_H
