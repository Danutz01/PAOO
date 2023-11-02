#include <iostream>
#include "ECU1.hpp"
#include "ECU2.hpp"
using namespace std;

// constructor
ECU1::ECU1(string model, int ecuNumber, string communicationType, string position, int soft, int ecuPair)
{

    this->model = model;
    this->ecuNumber = ecuNumber;
    this->communicationType = communicationType;
    this->position = position;
    this->soft = soft;
    this->ecuPair = ecuPair;
    ecu2 = new ECU2(ecuNumber, ecuPair);
}

string ECU1::getModel()
{
    return this->model;
}

int ECU1::getEcuNumber()
{
    return this->ecuNumber;
}

string ECU1::getCommunicationType()
{
    return this->communicationType;
}

string ECU1::getPosition()
{
    return this->position;
}

int ECU1::getSoft()
{
    return this->soft;
}

int ECU1::getEcuPair()
{
    return this->ecuPair;
}

// coppy constructor
ECU1::ECU1(const ECU1 &ecu1)
{

    this->model = ecu1.model;
    this->ecuNumber = ecu1.ecuNumber;
    this->communicationType = ecu1.communicationType;
    this->position = ecu1.position;
    this->soft = ecu1.soft;

    this->ecu2 = new ECU2(*(ecu1.ecu2));
}

// assigment operator
ECU1 &ECU1::operator=(const ECU1 &other)
{

    if (this == &other)
    {
        return *this;
    }

    delete this->ecu2;

    this->ecu2 = new ECU2(*(other.ecu2));

    this->model = other.model;
    this->ecuNumber = other.ecuNumber;
    this->communicationType = other.communicationType;
    this->position = other.position;
    this->soft = other.soft;

    return *this;
}

// destructor
ECU1::~ECU1()
{
    cout << "ECU1" << this->model << this->ecuNumber << this->position << " destroyed";
    cout << endl;
    if (ecu2 != nullptr)
    {
        delete ecu2;
    }
}

void ECU1::setModel(string model)
{
    this->model = model;
}

void ECU1::setEcuNumber(int ecuNumber)
{
    this->ecuNumber = ecuNumber;
}

void ECU1::setCommunicationType(string communicationType)
{
    this->communicationType = communicationType;
}

void ECU1::setPosition(string position)
{
    this->position = position;
}

void ECU1::setSoft(int soft)
{
    this->soft = soft;
}