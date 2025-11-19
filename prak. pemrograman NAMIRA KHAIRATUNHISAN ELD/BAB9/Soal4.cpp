#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int data[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = n - 1; j > i; j--){
            if (data[j] < data[j - 1])
                swap(data[j], data[j - 1]);
        }
    }
}

int main (){
    int n;
    cout<<"jumlah data: "; 
    cin >> n; 
    int data[n];
    
    cout<< "masukkan data: "<< endl;
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    bubble_sort(data, n);

    double median;

    if (n % 2 != 0) {  
        // ganjil → ambil elemen tengah
        median = data[n/2];
    }
    else {            
        // genap → rata-rata dua elemen tengah
        median = (data[n/2 - 1] + data[n/2]) / 2.0;
    }
    
    cout<<"data urut: ";
    for(int i=0; i<n; i++){
        cout<< data[i];
        if(i!=n-1) cout<< ", ";
    }
    
    cout<<endl << "Median adalah: " << median;
    return 0;
}
