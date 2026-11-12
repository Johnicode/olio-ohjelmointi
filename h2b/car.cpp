#include "car.h"
#include <iostream>

using namespace std;

Car::Car(std::string b, std::string m, int y) {
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData() const {
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << endl;
}


