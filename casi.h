#pragma once
#include<iostream>
#include<string>
using namespace std;
class casi
{
protected:

	string hoten;
	int sonam;
	int sodia;
	int sobuoi;
	int luong;
public:
	virtual void nhap();
	virtual void xuat() ;
	virtual void tinhluong() = 0;
	int getluong();

};


