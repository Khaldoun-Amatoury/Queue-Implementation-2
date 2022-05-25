#include <iostream>
#include <fstream>
#include "Employee.h"
using namespace std;


int main()
{

    Employee emp;

    ofstream file;


    file.open("aaa.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating file! " << endl << endl;
        return 0;
    }
    cout << "File created successfully! " << endl<<endl;


    emp.getData();

    file.write((char*)&emp, sizeof(emp));

    file.close();

    cout << "File saved and closed succesfully! " << endl << endl;;


    ifstream file1;

    file1.open("aaa.txt", ios::in);
    if (!file1) {
        cout << "Error in opening file! ";
        return 0;
    }

    file1.read((char*)&emp, sizeof(emp));


    emp.showData();

    file1.close();

    return 0;
}
