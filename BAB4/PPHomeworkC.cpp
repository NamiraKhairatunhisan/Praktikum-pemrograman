#include<iostream>
using namespace std;

int main(){
	int x, fungsi, y1sebelum, y2sebelum;
	x=0;
	y1sebelum=-1;
	y2sebelum=1;
	
	for(int i=0; i<7; i++){
		fungsi = y1sebelum + y2sebelum;
		
		cout << "untuk x= " << x<<endl;
		cout<< "y= " << -1*fungsi<<endl<<endl;
		x+= 1;
		y2sebelum=y1sebelum;
		y1sebelum=fungsi;
	}
	
}
