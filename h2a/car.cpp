#include "car.h"
#include <iostream>

using namespace std;

void Car::setBrand(string b) {
    brand = b;
}

void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

void Car::printData() const {
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << endl;
}


