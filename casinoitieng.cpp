#include "casinoitieng.h"
void casinoitieng::nhap(){
	casi::nhap();
	cout << "\nNhap so game show: ";
	cin >> sogameshow;
}
void casinoitieng::tinhluong() {
	luong = 5000000 + 500000 * sonam + 1200 * sodia + 500000 * sobuoi + 500000 * sogameshow;
}
void casinoitieng::xuat() {
	casi::xuat();
	cout << "\nSo game show: " << sogameshow;
}
