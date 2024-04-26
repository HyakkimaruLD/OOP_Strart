#pragma once
#include <iostream>
#include <cstring>
using namespace std;


class Record
{
private:
	char name[50];
	int nPhones;
	char** phones;
	char address[50];
	char email[50];

public:
	Record();
	Record(const char* name, const char* phone,
		const char* address, const char* email);

	~Record();
	void setName(const char* newName);
	void setAddress(const char* newAddress);
	void setEmail(const char* newEmail);
	
	const char* getName();
	int getAmountPhones();
	const char* getAddress();
	const char* getEmail();

	void showInfo();
	void addPhoneNumber(const char* number);
};

