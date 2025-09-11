#include<iostream>
using namespace std;

int main(){
	bool hasil;
 	hasil = (10 > 5) && (5 < 10);
	cout << "10 > 5 AND 5 < 10 : " << hasil << endl;
	
 	hasil = (10 > 5) || (5 > 10);
 	cout << "10 > 5 OR 5 > 10 : " << hasil << endl;
 	
 	hasil = !(10 > 5);
	cout << "NOT (10 > 5) : " << hasil << endl;
	
	return 0;
}
