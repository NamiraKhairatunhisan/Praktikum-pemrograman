#include<iostream>
using namespace std;

int main() {
	bool repeat = true;
	int num;

	while (repeat) {
		cout << "masukkan angka bulat positif: ";
		cin >> num;
		if (num > 0) {
			if (num % 2 == 0)
				cout << "bilangan genap"<<endl;
			else if (num % 2 != 0)
				cout << "bilangan ganjil"<<endl;
		}
		else
			repeat = false;
	}
}
