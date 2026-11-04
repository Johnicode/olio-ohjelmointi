#include <iostream>
#include <stdexcept>

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

int retSum(int x, int y) {
    return x + y;
}

float retDiv(int x, int y) {
    if (y==0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)x / y;
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

    int sum = retSum(a, b);
    cout << a << "+" <<  b << " = " << sum << endl;

    //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        float result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;
}
