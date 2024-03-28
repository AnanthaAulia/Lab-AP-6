//buatlah program untuk menentukan bilangan ganjil atau genap 

#include <iostream>
using namespace std;

int main(){
    int nilai;

    cout << "Masukkan Nilai";
    cin >> nilai;

    if (nilai % 2 ==0){
        cout<<"Genap"<<endl;
    } else {
        cout <<"Ganjil"<< endl;
    }
}
