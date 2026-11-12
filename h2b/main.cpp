#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back("Nissan", "Almera", 2005);
    carList.emplace_back("Fiat", "Punto", 2003);
    carList.emplace_back("Toyota", "Avensis", 2006);

    cout << "- Toisen alkion tiedot - " << endl;
    carList[1].printData();

    cout << endl << "- Kaikkien autojen tiedot -" << endl;

    for(int i=0; i<3; i++){
        carList[i].printData();
        cout << "--" << endl;
    }

    return 0;
}
