#include <iostream>

using namespace std;

void calcSum(int x, int y) {
    cout << "Summa: " << x + y << endl;
}

void calcDiv(int x, int y) {
    if (y == 0) {
        cout << "Virhe: nollalla ei voi jakaa" << endl;
    }
    else {
        cout << "Osamaara: " << (float)x / y << endl;
    }
}

void retSum(int x, int y) {

}

void retDiv(int x, int y) {

}

int main()
{
    int a, b;

    cout << "Anna luku a: " << endl;
    cin >> a;
    cout << "Anna luku b: " << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);


    return 0;
}
