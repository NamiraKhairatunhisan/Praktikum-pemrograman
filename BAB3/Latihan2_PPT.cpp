/*Baca opsi (1:+, 2:-, 3:*, 4:/) dan dua bilangan.
2 Gunakan switch untuk menentukan operasi.
3 Tangani pembagian oleh nol.
Ekstra: Jika input opsi di luar 1–4, tampilkan pesan kesalahan.*/

#include <iostream>
using namespace std;

int main (){
	int opsi;
	double a, b;
	cout << "masukkan nilai a dan b (pisah oleh spasi): ";
	cin >> a >> b;
	cout<< "pilih opsi (1:+, 2:-, 3:*, 4:/): ";
	cin >> opsi;

	switch (opsi){
		case 1:
			cout << a+b;
			break;
		case 2:
			cout << a-b;
			break;
		case 3:
			cout << a*b;
			break;
		case 4:
			if(b>0)
			cout << a/b;
			else
			cout<<"pembagi adalah nol";
			break;
		default:
			cout << "kesalahan";
	}
}
