#define charLen 20
#pragma once 
#include <iostream>

using namespace std;

class footwear {
private:
	char manufacturer[charLen];
	float size;
	double price;
public:
	footwear();
	~footwear();
	void setManufacturer(const char* manufacturer);
	void setSize(float size);
	void setPrice(double price);
	char* getManufacturer();
	float getSize();
	double getPrice();
	void print();
};

