#include "program.h"

Program::Program(char fileName[], int maxLength)
{
    _data = new uint8_t[maxLength];
    for(int i = 0; i < maxLength; i++)
    {
        _data[i] = 0;
    }

    //Read the program in .hex
    char* arr = new char[256];
    int index = 0;
    int arraySize = 256;

    ifstream file(fileName);

    char c;
    while(file.get(c))
    {
        if(index == arraySize)
        {
            char* t = new char[arraySize*2];

            for(int i = 0; i < arraySize; i++)
            {
                t[i] = arr[i];
            }
            arraySize *= 2;
            delete[] arr;
            arr = t;
        }

        arr[index++] = c;
    }

    processHex(arr, index);
}

Program::~Program()
{
    delete[] _data;
}

void Program::processHex(char* data, int length)
{
    cout << "Hex file read:" << endl;
    uint16_t baseAddress = 0x0000;

    char line[521];
    int index = 0;

    for(int i = 0; i < length; i++)
    {
        //Proccess the line
        if(data[i] == '\n')
        {
            cout << line << endl;
            uint8_t byteCount = toByteCount(line[1], line[2]);
            uint16_t address = toAddress(line[3], line[4], line[5], line[6]);
            uint8_t recordType = toRecordType(line[7], line[8]);
            switch(recordType)
            {
                case 0: //data
                    for(int j = 0; j < byteCount*2; j+=2, address++)
                    {
                        _data[baseAddress + address] = toByteCount(line[9+j], line[10+j]);
                    }
                    break;
                case 1: //EOF
                    break;
                case 2: //Extended Segment Address
                    baseAddress = toAddress(line[9], line[10], line[11], line[12]);
                    break;
                default:
                    break;
            }

            //Clear the line
            index = 0;
            for(int j = 0; j < 521; j++)
                line[j] = 0;
            continue;
        }
        line[index++] = data[i];
    }
}

uint8_t Program::toByteCount(char msb, char lsb)
{
    return toByte(lsb) | (toByte(msb)<<4);
}

uint16_t Program::toAddress(char n1, char n2, char n3, char n4)
{
    return (toByte(n1)<<12) | (toByte(n2)<<8) | (toByte(n3)<<4) | toByte(n4);
}

uint8_t Program::toRecordType(char msb, char lsb)
{
    return toByte(lsb) | (toByte(msb)<<4);
}

uint8_t Program::toByte(char data)
{
    switch(data)
    {
        case '0':
            return 0x0;
        case '1':
            return 0x1;
        case '2':
            return 0x2;
        case '3':
            return 0x3;
        case '4':
            return 0x4;
        case '5':
            return 0x5;
        case '6':
            return 0x6;
        case '7':
            return 0x7;
        case '8':
            return 0x8;
        case '9':
            return 0x9;
        case 'A':
            return 0xA;
        case 'B':
            return 0xB;
        case 'C':
            return 0xC;
        case 'D':
            return 0xD;
        case 'E':
            return 0xE;
        case 'F':
            return 0xF;
    }
    return 0x0;
}

uint8_t* Program::getArray()
{
    return _data;
}
