#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	a = 5;
	b = 7;
	cout << "nilai a: " << a << endl << "nilai b: " << b << endl;
	
	c = a;
	a = b;
    b = c;
    
    cout << "nilai a: " << a << endl << "nilai b: " << b;
}
