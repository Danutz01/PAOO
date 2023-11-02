#include <iostream>
#include "ECU1.hpp"
#include "ECU2.hpp"
#include <vector>
using namespace std;

// generam un ECU Daimler, adica Mercedes
//model = Daimler/Porche/GM/Volvo
//communicationType = ETH/CAN
//int position = FR/FL/BR/BL/SR/SL
//soft = 23.39.00 / 23.42.00
ECU1 generateECU(string model, int ecuNumber, string communicationType, int position, int soft, int ecuPair){
    ECU1 ecu(model, ecuNumber, communicationType, position, soft, int ecuPair);
    return ecu;
}

int main(int, char**){

    vector<ECU1> vectorTestingEcu1;
    vector<ECU2> vectorTestingEcu2;

    cout<<"Add a ECU for testing"<<endl;
    int ecuNumber, position, soft, ecuPair;
    string model, communicationType;

    cout<<"Give the model"<<endl;
    cin>>model;

    cout<<"Give the ECU number"<<endl;
    cin>>ecuNumber;

    cout<<"Give the communication Type"<<endl;
    cin>>communicationType;

    cout<<"Give the position"<<endl;
    cin>>position;

    cout<<"Give the soft"<<endl;
    cin>>soft;

    cout<<"Give the ecu pair number"<<endl;
    cin>>ecuPair;

    ECU1 ecu1 = generateECU(model, ecuNumber, communicationType, position, soft, int ecuPair);

    vectorTestingEcu1.push_back(ecu1);

    ECU2 ecu2  = *ecu1.getEcuPair();
    vectorTestingEcu1.push_back(ecu2);

}