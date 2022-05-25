#ifndef employee_h
#define employee_h
#include <iostream>
using namespace std;
#include <fstream>


class Employee
{
private:

    char firstName[20];

    char lastName[20];

    int age;
public:
    void getData()
    {
        cout << "Enter firstname: ";
        cin.getline(firstName, 20);

        cout << "Enter lastname: ";
        cin.getline(lastName, 20);

        cout << "Enter age: ";
        cin >> age;
    }

    void showData()
    {
        cout << "firstname: " << firstName << endl << endl;

        cout << "lastname: " << lastName << endl<<endl;

        cout << "Age: " << age << endl << endl;
    }
};
#endif


