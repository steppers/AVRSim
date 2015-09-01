#include <iostream>

using namespace std;

#include "program.h"
#include "mcu.h"

#define FLASH_SIZE 0x3fff

int main()
{
    MCU mcu(0x08ff, FLASH_SIZE);

    char file[] = "test.hex";
    Program prog(file, FLASH_SIZE);

    mcu.writeProgMem((uint16_t)0x0000, prog.getArray(), (uint16_t)FLASH_SIZE);
    mcu.execute(10);

    //Print the register contents
    for(uint16_t i = 0; i < 32; i++)
    {
        cout << "r" << i << " = " << (int)mcu.getMem(i) << endl;
    }
    return 0;
}
