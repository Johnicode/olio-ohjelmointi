#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "Italian Chef " << name << " konstruktoi" << endl;
}

string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian Chef " << name << " destruktoi" << endl;
}