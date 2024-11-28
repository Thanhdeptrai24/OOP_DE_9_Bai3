#include"casichuanoitieng.h"
#include"casinoitieng.h"
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(casi* s1, casi* s2) {
	if (s1->getluong() > s2->getluong()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int soluong;
	cout << "Nhap so luong ca si: ";
	cin >> soluong;
	vector<casi*>vt;
	for (int i = 0; i < soluong; i++) {
		int type;
		cout << "1: ca si noi tieng" << endl;
		cout << "2:ca si chua noi tieng" << endl;
		cout << "Nhap loai ca si: ";
		cin >> type;

		if (type == 1) {
			casi* singer = new casinoitieng();
			singer->nhap();
			vt.push_back(singer);
			


		}
		else {
			casi* singer = new casichuanoitieng();
			singer->nhap();
			vt.push_back(singer);

		}
	}

	for (auto x : vt) {
		x->tinhluong();
		

	}

	sort(vt.begin(), vt.end(), cmp);
	
	cout << "\nCa si co luong cao nhat:\n";
	vt[0]->xuat();
	cout <<"\nLuong:" <<vt[0]->getluong();





}

