#include<iostream>
using namespace std;

void TukarV(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void TukarR(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main(){
	int a, b;
	cout<< "bilangan pertama: ";
	cin >> a;
	cout << "bilangan kedua: ";
	cin >> b;
	cout<< endl;
	TukarV(a, b);
	cout<< "tukar Value"<<endl;
	cout<< "nilai pertama: " <<a<< endl << "nilai kedua: "<<b << endl<<endl; 
	TukarR(a, b);
	cout<< "tukar reference"<<endl;
	cout<< "nilai pertama: " <<a<< endl << "nilai kedua: "<<b << endl; 
}
