#include <iostream>
#include "ECU1.hpp"
#include "ECU2.hpp"
#include <vector>
using namespace std;

// generam un ECU Daimler, adica Mercedes
// model = Daimler/Porche/GM/Volvo
// communicationType = ETH/CAN
// int position = FR/FL/BR/BL/SR/SL
// soft = 23.39.00 / 23.42.00
ECU1 generateECU(string model, int ecuNumber, string communicationType, string position, int soft, int ecuPair)
{
    ECU1 ecu(model, ecuNumber, communicationType, position, soft, ecuPair);
    return ecu;
}

int main(int, char **)
{

    vector<ECU1> vectorTestingEcu1;
    vector<ECU2> vectorTestingEcu2;

    cout << "Add a ECU for testing" << endl;
    int ecuNumber, soft, ecuPair;
    string model, communicationType, position;

    cout << "Give the model" << endl;
    cin >> model;

    cout << "Give the ECU number" << endl;
    cin >> ecuNumber;

    cout << "Give the communication Type" << endl;
    cin >> communicationType;

    cout << "Give the position" << endl;
    cin >> position;

    cout << "Give the soft" << endl;
    cin >> soft;

    cout << "Give the ecu pair number" << endl;
    cin >> ecuPair;

    ECU1 ecu1 = generateECU(model, ecuNumber, communicationType, position, soft, ecuPair);
    vectorTestingEcu1.push_back(ecu1);

    ECU1 ecu3 = ECU1(ecu1);

    ECU1 ecu4 = generateECU(model, ecuNumber, communicationType, position, soft, ecuPair);
    ecu4 = ecu1;
}