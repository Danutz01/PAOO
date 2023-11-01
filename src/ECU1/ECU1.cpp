#include <iostream>
#include "ECU1.hpp"
#include "ECU2.hpp"
using namespace.std;

ECU1::ECU1(string model, string ecuNumber, string communicationType, int position, int soft){

    this->model = model;
    this->ecuNumber = ecuNumber;
    this->communicationType = communicationType;
    this->position = position;
    this->soft = soft;
    ecu2 = new ECU2(ecu2Name);
}


//coppy constructor
ECU1::ECU1(const ECU1 &ecu1){

    this->model = ecu1.model;
    this->ecuNumber = ecu1.ecuNumber;
    this->communicationType = ecu1.communicationType;
    this->position = ecu1.position;
    this->soft = ecu1.soft;

    this->ecu2 = new ECU2(*(ecu1.ecu2));
}

//assigment operator

ECU1& ECU1::operator = (const ECU1& other){

    if(this == &other){
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