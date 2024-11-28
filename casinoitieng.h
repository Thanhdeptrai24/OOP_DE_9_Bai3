#pragma once
#include"casi.h"
class casinoitieng:public casi
{
protected:
	int sogameshow;
public:
	
	void tinhluong() override;
	void nhap() override;
	void xuat() override;
};

