#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    Car myCar;

    myCar.setBrand("Nissan");
    myCar.setModel("Almera");
    myCar.setYearModel(2005);

    myCar.printData();

    cout << endl;

    Rectangle* myRec = new Rectangle();

    myRec->setWidth(6.5);
    myRec->setHeight(4.3);

    cout << "Suorakulmion pinta-ala: " << myRec->getArea() << endl;
    cout << "Suorakulmion ymparysmitta: " << myRec->getCircum() << endl;

    delete myRec;

    cout << endl;

    unique_ptr<Student> myStudent = make_unique<Student>();

    myStudent->setName("Jouko Jokunen");
    myStudent->setStudentNumber(123456789);
    myStudent->setAverage(4.4);

    cout << "Opiskelijan nimi: " << myStudent->getName() << endl;
    cout << "Opiskelijanumero: " << myStudent->getStudentNumber() << endl;
    cout << "Keskiarvo: " << myStudent->getAverage() << endl;

    return 0;
}
