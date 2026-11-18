#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name) {
    this->name = name;
    cout << "Chef " << name << " konstruktoi" << endl;
}

void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destruktoi" << endl;
}
