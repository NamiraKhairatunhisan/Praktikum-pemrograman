#include<iostream>
using namespace std;

int main(){
	int r, c,s;
	s=0;
	cout<<"baris & kolom: ";
	cin>> r >> c;
	
	int m[10][10];
	for(int i=0; i<r;i++){
		for(int j=0; j<c; j++){
			cout<<"baris "<<i+1<<", kolom "<<j+1<<": ";
			cin>>m[i][j];	
		}
	}
	
	for(int i=0; i<r;i++){
		s = 0;
		for(int j=0; j<c;j++){
			s += m[i][j];
		}
		cout<<"jumlah baris ke-" <<i+1<<": "<< s<<endl; 
	}

}
