#include <iostream>
#include <string>
#include "ECU2.hpp"
using namespace std;

class ECU1{
    public: ECU1(string model, int ecuNumber, string communicationType, string position, int soft, int ecuPair);

    ECU1(cont ECU1 &ecu1);

    ECU1& operator = (const Plane& other);

    ~Plane();

    private:
    string model;
    int ecuNumber;
    string communicationType;
    string position;
    int soft;
    int ecuPair;
     
    ECU2 *ecu2;

    void setModel(
        string model
    );

    void setEcuNumber(
        int ecuNumber
    );
    
    void setCommunicationType(
        string communicationType
    );

    void setPosition(
        string position
    );

    void setSoft(
        int soft
    );

    string getModel();
    int getEcuNumber();
    string getCommunicationType();
    string getPosition();
    int getSoft();
}