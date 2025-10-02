#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"jumlah data: ";
	int arr[100];
	cin >> n;
	
	for (int i=0; i<n; i++){
		cout<<"data ke-"<<i+1<<":"<<endl;
		cin>>arr[i];
	}
	
	int max=arr[0];
	
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	
	cout<<"data terbesar: "<<max;

}
