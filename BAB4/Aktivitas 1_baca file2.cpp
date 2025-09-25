#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int data1, data2, data3, data4;
	ifstream file("data_input.txt");
	if(file){
		cout<<"file sukses dibuka"<<endl;
		file>>data1;
		file>>data2;
		file>>data3;
		file>>data4;
		file.close();
		cout<<"data yang dibaca dari file: "<<endl;
		cout<<"data1: "<< data1<<endl;
		cout<<"data2: "<< data2<<endl;
		cout<<"data3: "<< data3<<endl;
		cout<<"data4: "<< data4<<endl;
		return 0;
	}
	
	else{
		cout<< "file gagal dibuka"<<endl;
		return 1;
	}

}
