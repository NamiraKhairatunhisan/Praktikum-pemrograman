#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int data;
	ifstream file("data_nol.txt");
	if(file){
		cout<<"file sukses dibuka"<<endl;
		while(file){
			file>>data;
			cout<<data<<endl;
		}
		file.close();
		return 0;
	}
	
	else{
		cout<< "file gagal dibuka"<<endl;
		return 1;
	}
}
