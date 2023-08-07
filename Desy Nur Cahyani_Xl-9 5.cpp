#include <cstdlib>
#include <iostream>
using namespace std;

int permutasi (int x, int y) {
    int Nilai_Permut, selisih;
    int Faktorial = 1;
    selisih = x - y;
    
    while (x > 0) {
    Faktorial = Faktorial * x;
    x = x-1;
	}
	 Nilai_Permut - Faktorial/selisih;
	 return(Nilai_Permut);
}

int main () {
	int n, r;
	cout << "Masukkan Nilai N Kembali: ";
	cin >> n;
	while (n < 0) {
	cout << "Masukkan Nilai N Kembali: ";
	cin >> n;
	}
	cout << "Maukkan Nilai r Kembali: ";
	cin >> r;
	while (r < 0) {
	cout << "Masukkan Nilai r Kembali: ";
	cin >> r;
	}
	
	cout << "Nilai permutasi " << " dari " << n << "adalah " << permutasi(n, r) << endl;
	
	system ("PAUSE");
	return(0);
}
