#include <iostream>
#include <array>
using namespace std;

int main()
{  
     system("cls");

    //string nama[5] = {"Andi","Budi","Santi","Nanto","Denis"};

    //nama[0] = "Andi"
    //nama[1] = "Budi"
    //nama[2] = "Santi"
    //nama[3] = "Nanto"
    //nama[4] = "Denis"

    //for (int i = 0 ; i<5 ; i++){
    //    cout << nama[i] <<endl;
    //}

    //?multidimensional Array
    //int matrix[2][2] ={ {1,3},{2,4} };
    //for (int i =0 : i < 2;i++){
    //    for (int j = 0 ; j < 2; j++){
    //        cout << matrix[i][j] << " "
    //    }
    //    cout << endl;
    //}

    //?string (array of character)
    //string nama = "jonrio";
    //for (int i = 0; i<3 ; i++){
    //    cout <<nama [i]<<" ";
    //}

    //for (int i = 0;i < nama.length();i++){
    //    cout << nama[i] << endl;
    //}

    //? example 1
    //int  n;
    
    //cout << "Masukkan Banyak Mahasiswa: ";
    //cin >> n;

    //float nilai[n];
    //for (int i =0; i<n;i++){
    //    cout << "Masukkan Nilai Mahasiswa ke " << i+1;
    //    cin >> nilai[i];
    //}

    //? example 2
    //string nama_karyawan[] = {"Andi","Yusuf","Budi","Santi","Dodi"};

    //!  sizeof() -> berfungsi untuk mengecek suatu objek
    //* n * sizeof(string) = sizeof(nama_karyawan)
    //* n = sizeof(nama_karyawan) / sizeof(string)

    //for (int i = 0; i<sizeof(nama_karyawan) / sizeof(string);i++){
    //    cout << nama_karyawan[i] << endl;
    //}

    //? example 3
    //int matriks1[2][2];
    //int matriks2[2][2];
    //int hasil [2][2];

    //cout << "Matriks1"<<endl;
    //for (int i = 0 ; i<2;i++){
    //    for(int j = 0 ; j<2;j++){
    //        cout "Masukkan elemen baris " << i + 1 << "kolo "
    //    }

    //? Array library
    array < string, 5 > nama = {"Andi","Budi","Santi","Nanto","Denis"};

    for(string mhs : nama){
        cout << mhs << endl;
    }
    cout << nama.size() << endl;

}