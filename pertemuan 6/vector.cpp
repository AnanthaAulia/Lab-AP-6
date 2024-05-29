#include <iostream>
#include <vector>
using namespace std;

int main(){
    system("cls");

    //?vector declaration and initization
    vector <string> nama = {"Andi","Budi","Santi","Nanto","Denis"};

    //?accesing element in vector
    //for(int  i = 0 ; nama.size();i++){
    //    cout << nama[i] << endl;
    //}

    //cout << endl;

    //for each loop
    for(string mhs : nama ){
        cout << mhs << endl;
    }
    //? adding data to vector
    nama.push_back("wawan");

    //? deleting data from vector
    //nama.pop_back();      //menghapus data vector paling akhir
    nama.erase(nama.begin() + 2);   // erase() untuk menghapus data, begin() untuk mendapatkan data vector paling awal

    //for(int  i = 0 ; nama.size();i++){
    //    cout << nama[i] << endl;
    //}
   
}