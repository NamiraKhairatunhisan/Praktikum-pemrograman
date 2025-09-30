#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int data;
	ifstream file("data_nol.txt");
	if (file) {
		cout << "file sukses dibuka" << endl;
		do {
			file >> data;
			cout << data << endl;
		} while (file);
		file.close();
	}

	else {
		cout << "file gagal dibuka" << endl;
		return 1;
	}
}
