#include<iostream>
using namespace std;

int main(){
	int x, fungsi;
	x=0;
	
	for(int i=0; i<7; i++){
		fungsi = x*x + 1;
		
		cout << "untuk x= " << x<<endl;
		cout<< "y= " << fungsi<<endl<<endl;
		x+= 1;
	}
	
}
