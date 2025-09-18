#include <iostream>
using namespace std;

int main (){
	int x;
	cout<<"masukkan nilai x: ";
	cin >> x;
	
	if(x<1){
		cout << "User salah input";
	}
		else if(x%2 == 0 && x != 2){
		cout << "bilangan bukanlah prima";
		}
		else{
		cout << "mungkin prima";
		}
}

