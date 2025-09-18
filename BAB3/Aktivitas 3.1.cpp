#include <iostream>
using namespace std;

int main (){
	float x;
	cout<<"nilai x: ";
	cin >> x;
	char nilai;
	
	if (x >=80)
		nilai = 'a';
		else if(x >= 60)
		nilai = 'b';
		else if(x >= 40)
		nilai = 'c';
		else if(x >= 20)
		nilai = 'd';
		else
		nilai = 'e';
	
	cout << "nilai: "<<nilai;
}
