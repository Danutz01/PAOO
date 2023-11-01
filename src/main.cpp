#include <iostream>
#include "ECU1.hpp"
#include "ECU2.hpp"
#include <vector>
using namespace.std;

// generam un ECU Daimler, adica Mercedes
//model = Daimler/Porche/GM/Volvo
//communicationType = ETH/CAN
//int position = FR/FL/BR/BL/SR/SL
//soft = 23.39.00 / 23.42.00
ECU1 generatePlane(string model, string ecuNumber, string communicationType, int position, int soft){
    ECU1 ecu(model, ecuNumber, communicationType, position, soft);
    return ecu;
}
