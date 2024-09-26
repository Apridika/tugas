#include <iostream>

using namespace std;

int main (){
  int harga = 150000;
  double diskon = 12.5;
  double hasildiskon = harga * diskon/100;
  double hasil = harga - hasildiskon;
  cout << "Harga : " <<harga << " ribu"<<endl;
  cout << "Diskon : " <<diskon <<endl;
  cout << "Besarnya diskon dari harga : " <<hasildiskon <<endl;
  cout << "Harga setelah diskon " <<hasil <<" ribu";
  return 0;
}
