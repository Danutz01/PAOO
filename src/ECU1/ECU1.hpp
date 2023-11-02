#include <iostream>
#include <string>
#include "ECU2.hpp"
using namespace std;

class ECU1
{
public:
    ECU1(string model, int ecuNumber, string communicationType, string position, int soft, int ecuPair);

    ECU1(const ECU1 &ecu1);

    ECU1 &operator=(const ECU1 &other);

    ~ECU1();

    void setModel(
        string model);

    void setEcuNumber(
        int ecuNumber);

    void setCommunicationType(
        string communicationType);

    void setPosition(
        string position);

    void setSoft(
        int soft);

    void setEcuPair(
        int ecuPair);

    string getModel();
    int getEcuNumber();
    string getCommunicationType();
    string getPosition();
    int getSoft();
    int getEcuPair();

    ECU2 *ecu2;

private:
    string model;
    int ecuNumber;
    string communicationType;
    string position;
    int soft;
    int ecuPair;
};