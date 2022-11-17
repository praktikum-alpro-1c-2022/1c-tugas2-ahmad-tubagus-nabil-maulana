#include <iostream>

using namespace std;

int main(){
    float phi = 3.14, r, hitungLuas;
    
    cout << "Masukan r: ";
    cin >> r;

    hitungLuas = phi * r * r;

    cout << "Luas lingkaran adalah: " << hitungLuas << endl;

  return 0;    
}