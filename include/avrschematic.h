#ifndef AVRSCHEMATIC_H
#define AVRSCHEMATIC_H

#include "instructionset.h"

class AVRSchematic
{
    public:
        AVRSchematic(uint16_t flashSize, uint16_t eepromSize, uint16_t sramSize);
        ~AVRSchematic();

        uint16_t flashSize(){return _flashSize;}
        uint16_t eepromSize(){return _eepromSize;}
        uint16_t sramSize(){return _sramSize;}
        InstructionSet* instructionSet(){return _iSet;}

        void setInstructionSet(InstructionSet* iSet){_iSet = iSet;}

    private:
        uint16_t _flashSize;
        uint16_t _eepromSize;
        uint16_t _sramSize;

        InstructionSet* _iSet;
};

#endif // AVRSCHEMATIC_H
