#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "footwear.h"


footwear::footwear()
{

}

footwear::~footwear()
{

}

void footwear::setManufacturer(const char* manufacturer)
{
	strcpy(this->manufacturer, manufacturer);
}

void footwear::setSize(float size)
{
	this->size = size;
}

void footwear::setPrice(double price)
{
	this->price = price;
}

char* footwear::getManufacturer()
{
	return this->manufacturer;
}

float footwear::getSize()
{
	return this->size;
}

double footwear::getPrice()
{
	return this->price;
}

void footwear::print()
{
	cout << this->manufacturer << endl;
	cout << this->size << endl;
	cout << this->price << endl;
}