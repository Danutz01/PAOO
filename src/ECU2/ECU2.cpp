#include <iostream>
#include "ECU2.hpp"
using namespace std;

ECU2::ECU2(int ecuNumber, int ecuPair)
{
    this->ecuNumber = ecuNumber;
    this->ecuPair = ecuPair;
}

ECU2::~ECU2()
{
    cout << "ECU2" << this->ecuNumber << " is destoyed";
    cout << endl;
}

int ECU2::getEcuNumber()
{
    return this->ecuNumber;
}

int ECU2::getEcuPair()
{
    return this->ecuPair;
}

void ECU2::setEcuNumber(int ecuNumber)
{
    this->ecuNumber = ecuNumber;
}