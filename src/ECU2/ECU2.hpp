#include <iostream>
#ifndef ECU2_HPP
#define ECU2_HPP
using namespace std;

class ECU2
{

public:
    ECU2(int ecuNumber, int ecuPair);
    ~ECU2();

    int getEcuNumber();
    int getEcuPair();

    void setEcuNumber(int ecuNumber);

private:
    int ecuNumber;
    int ecuPair;
};

#endif