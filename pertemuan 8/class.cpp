#include <iostream>
#include <vector>
using namespace std;

    class Mahasiswa{
        private:
            string nama, nim;
            float nilai;
        //? Access modifier
        public:
            //? Constructor method
            mahasiswa(string nama, string nim, float nilai){
                this->nama = nama;
                this->nim = nim;
                this->nilai = nilai;
            }
            
            string getNama(){
                return this->nama;
            }
            string getNim(){
                return this->nim;
            }
            string getNilai(){
                return this->nilai;
            }

            void display(){
                cout << "Nama : " << this->nama << endl;
                cout << "NIM : " << this->nim << endl;
                cout << "nilai : " << this->nilai << endl;
            }

};
            
 int main(){
    system("cls");

    Mahasiswa mhs("Andi", "231401001", 87.2);
    mhs.display();

    // deklarasi vektor
    vector <Mahasiswa> mahasiswa;
    int n;
    string nama,nim;
    float nilai;

    cout << "Masukkan jumlah mahsiswa: ";
    cin >> n;

    for (int i = 0 ; i<n ; i++)
    {
        cout << "Mahasiwa" << i+1 << endl;

        cin.get();

        cout << "Masukkan nama";
        getline(cin,nama);

        cout << "Masukkan NIM";
        cin >> nim;

        cout << "Masukkan nilai";
        cin >> nilai;

        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }
    for (int i = 0 ; i < n ; i++)
    {
        cout << "Mahasiswa" << i + 1 << endl;
        mahasiswa[i].display();
    }
}   