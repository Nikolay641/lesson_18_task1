#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Computer
{
	char name[100] = ""; 
	float frequnsy = 0;
	int RAM = 0;
	bool DVD = false;
	float prise = 0;

	void showInfo() {
		cout << "name: " << name << endl;
		cout << "frequnsy: " << frequnsy<< "GHz" << endl;
		cout << "RAM: " << RAM<< "Gb" << endl;
		cout << "DVD: " << (DVD ?"yes" : "no") << endl;
		cout << "prise: " << prise<< "UAN" << endl << endl;
	}
};
