#include "stdafx.h"
#include "footwear.h"


int _tmain(int argc, _TCHAR* argv[])
{
	const int N=2;
	footwear ArrayFootwear[N];
	ArrayFootwear[1].setManufacturer("Hoodlab");
	ArrayFootwear[1].setSize(41.5);
	ArrayFootwear[1].setPrice(55.00);
	ArrayFootwear[1].print();
	ArrayFootwear[2].setManufacturer("M+RC Noir");
	ArrayFootwear[2].setSize(37.5);
	ArrayFootwear[2].setPrice(45.75);
	ArrayFootwear[2].print();
	system("pause");
    return 0;
}

