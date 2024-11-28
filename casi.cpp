#include "casi.h"
void casi::nhap() {
	cout << "\nNhap thong tin ca sy:";
	cout << "\nHo ten: ";
	cin.ignore();
	getline(cin,hoten);
	cout << "\nSo nam lam viec: ";
	cin >> sonam;
	cout << "\nSo dia ban duoc: ";
	cin >> sodia;
	cout << "\nSo buoi trinh dien da tham gia: ";
	cin >> sobuoi;

	
	
}
void casi::xuat()
{
	cout << "\nThong tin ca sy:";
	cout << "\nHo ten: " << hoten;
	cout << "\nSo nam lam viec: " << sonam;
	cout << "\nSo dia ban duoc: " << sodia;
	cout << "\nSo buoi trinh dien: " << sobuoi;
}int casi:: getluong() {
	return luong;
}