#pragma once
#include <iostream>

using namespace std;

class String
{
	char* str;
	int time;
public:
	String() {
		char* str = new char[80]; 
		cout << "ВВедите строку: " << endl;
		cin >> str;
		time++;
	}
	String(int size) {
		char* str = new char[size];
		cout << "ВВедите строку: " << endl;
		cin >> str;
		time++;
	}
	char* getStr() {
		return str;
	}
	void getTime() {
		cout << time << endl;
	}
	~String() {
		cout << "Destructor " << this << endl;
	}


};

