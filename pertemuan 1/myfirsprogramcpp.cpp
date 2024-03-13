#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    string nama;
    int nim;
    char kom;
    float ip;
    
    cout<<"Hello World"<< endl;
    
    cout <<"Masukkan Nama: ";
    getline(cin,nama); //cin >> nama;
    
    cout << "Masukkkan Nim: ";
    cin >> nim;
    
    cout << "Masukkan Kom: ";
    cin >> kom;
    
    cout << "Masukkan Ip: ";
    cin >> ip;
    
    cout <<"Nama :"<<nama<<endl;
    cout <<"Nim  :"<<nim<<endl;
    cout <<"kom  :"<<kom<<endl;
    cout<< fixed << setprecision(2);
    cout <<"ip   :"<<ip<<endl;
    cout <<"Hello world"<< endl;
    
    return 0;
}