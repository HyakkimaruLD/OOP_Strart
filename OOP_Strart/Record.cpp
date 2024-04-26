
#include "Record.h"
#define DEBUG
Record::Record()
{
	strcpy_s(name, 50, "Mino");
	nPhones = 1;
	phones = new char* [nPhones];
	phones[0] = new char[50] {"+38(099)00-00-000"};


	strcpy_s(address, 50, "Kharkiv");
	strcpy_s(email, 50, "mino@gmail.com");

#ifdef DEBUG

	cout << "Record(): " << name << endl;

#endif // DEBUG

}

Record::Record(const char* _name, const char* _phone, const char* _address, const char* _email)
{
	strcpy_s(name, 50, _name);
	nPhones = 1;
	phones = new char* [nPhones];
	phones[0] = new char[50] {""};
	strcpy_s(phones[0], 50, _phone);

	strcpy_s(address, 50, _address);
	strcpy_s(email, 50, _email);
#ifdef DEBUG
	cout << "Record(n, ph, add, email): " << name << endl;

#endif // 

}

Record::~Record()
{
#ifdef DEBUG
	cout << "Record(): " << name << endl;
#endif 

	for (int i = 0; i < nPhones; i++)
	{
		delete[] phones[i];
	}
	delete[] phones;
}

void Record::setName(const char* newName)
{
	if (strlen(newName) > 2)
	{
		strcpy_s(name, 50, newName);
	}
	else
	{
		cout << "Erorr name < 2!!!\n";
	}
}

void Record::setAddress(const char* newAddress)
{
	if (strlen(newAddress) >= 5)
	{
		strcpy_s(address, 50, newAddress);
	}
	else
	{
		cout << "Erorr address < 5!!!\n";
	}
}

void Record::setEmail(const char* newEmail)
{
	if (strlen(newEmail) >= 5 && strstr(newEmail, "@") != NULL)
	{
		strcpy_s(email, 50, newEmail);
	}
	else
	{
		cout << "Erorr name < 5 or not found @!!!\n";
	}
}

const char* Record::getName()
{
	return name;
}

int Record::getAmountPhones()
{
	return nPhones;
}

const char* Record::getAddress()
{
	return address;
}

const char* Record::getEmail()
{
	return email;
}

void Record::showInfo()
{
	cout << "Name: " << name << endl;
	cout << "Phones: " << nPhones << endl;
	for (int i = 0; i < nPhones; i++)
	{
		cout << "\t#" << i + 1 << ". " << phones[i] << endl;
	}
	cout << "address: " << address << endl;
	cout << "Email: " << email << endl << endl;
}

void Record::addPhoneNumber(const char* number)
{
	if (strlen(number) > 5)
	{
		nPhones++;

		char** tmp = new char* [nPhones];
		for (int i = 0; i < nPhones - 1; i++)
		{
			tmp[i] = phones[i];
		}
		delete[]phones;

		tmp[nPhones - 1] = new char[50] {""};
		strcpy_s(tmp[nPhones - 1], 50, number);

		phones = tmp;
	}
}
