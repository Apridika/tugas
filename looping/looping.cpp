#include <iostream>
using namespace std;

int main(){
  int data, ganjil=0, genap=0;
  cout << "masukan jumlah data: "; cin >> data;

  for (int a=0; a < data; a++){
    if (a%2 == 0){
      genap += a;
    } else {
      ganjil += a;
    }
  }
  cout << "jumlah total bilangan ganjil: " << ganjil;
  cout << "\njumlah total bilangan genap: " << genap;

  return 0;
}