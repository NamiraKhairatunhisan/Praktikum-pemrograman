#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main() {
	int n;
	cout<< "jumlah transaksi: ";
	cin>>n;
	
	vector<pair<string,int>> transaksi;
	string beli;
	int harga;
	
	for(int i=0; i<n;i++){
		cout<<"beli & harga: ";
		cin >> beli >> harga;
		transaksi.push_back({beli, harga});
	}

	for (int i = 0; i < n; i++) {
		cout<< transaksi[i].first<<" "<< transaksi[i].second<<endl;
	}
}

