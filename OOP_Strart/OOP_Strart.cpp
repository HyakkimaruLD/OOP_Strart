// OOP_Strart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Record.h"
using namespace std;

int main()
{
    Record a;

    Record b("Rioko Mino", "+38-099-00-01-001", "Kharkiv", "mino@gmail.com");
    
    a.showInfo();
    b.showInfo();

    cout << "==============================\n\n";

    a.setName("");
    a.setName("Lia Vioto");

    b.setAddress("Mahoraga");

    cout << a.getName() << " Lives in - " << a.getAddress() << endl;
    cout << b.getName() << " Lives in - " << b.getAddress() << endl;

    cout << "=================================";

    a.addPhoneNumber("0578291");
    a.addPhoneNumber("0-212-12-2");

    b.addPhoneNumber("21-12-12");

    a.showInfo();
    b.showInfo();
}

