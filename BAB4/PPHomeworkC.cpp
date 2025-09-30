#include<iostream>
using namespace std;

int main(){
	int x, fungsi, y1sebelum, y2sebelum;
	x=3;
	
	for(int i=1; i<7; i++){
	    if(i==1 || i==2){
	        cout << "untuk x= " << i<<endl;
	        fungsi = 1;
	        cout << "y= " << fungsi<<endl<<endl;
	        
	        y1sebelum = 1;
	        y2sebelum = 1;
	        
	    }
	    
	    else{
		fungsi = y1sebelum + y2sebelum;
		
		cout << "untuk x= " << x<<endl;
		cout<< "y= " << fungsi<<endl<<endl;
		x+= 1;
		y2sebelum=y1sebelum;
		y1sebelum=fungsi;
	    }
	}
	
}
