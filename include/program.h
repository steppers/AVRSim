#ifndef PROGRAM_H
#define PROGRAM_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Program
{
    public:
        Program(char fileName[], int maxLength);
        ~Program();

        uint8_t* getArray();

    private:
        uint8_t* _data;

        void processHex(char* data, int length);
        uint8_t toByteCount(char msb, char lsb);
        uint16_t toAddress(char n1, char n2, char n3, char n4);
        uint8_t toRecordType(char msb, char lsb);
        uint8_t toByte(char data);
};

#endif // PROGRAM_H
