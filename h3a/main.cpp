#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    // Gordon Ramsay versio

    /*
    Chef gordon("Gordon Ramsay");

    gordon.makeSalad();
    gordon.makeSoup();

    */

    ItalianChef anthony("Anthony Bourdain");

    anthony.makeSalad();
    anthony.makeSoup();

    anthony.makePasta();

    cout << "name of the Italian Chef is " << anthony.getName() << endl;

    return 0;
}
