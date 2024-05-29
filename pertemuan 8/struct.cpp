#include <iostream>
#include <vector>

using namespace std;

struct mahasiswa
{
    string nama, nim;
    float nilai;
};

int main(){
    system("cls");

    mahasiswa mhs;
    vector<mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n ; i++ )
    {
        cin.get();
        cout << "Masukkan nama : ";
        getline(cin,mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs);
    }
    
    for (int i = 0; i < n ; i++){
    cout << mahasiswa[i].nama << " memiliki nim " << mahasiswa[i].nim << " dan nilai " << mahasiswa[i].nilai << endl;
    }
}