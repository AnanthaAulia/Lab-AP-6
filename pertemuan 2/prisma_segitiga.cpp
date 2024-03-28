#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("CLS");
    float luas_alas,tinggi,volume,tinggi_prisma,lp;

    cout << "Masukkan luas alas: ";
    cin >> luas_alas;

    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    cout <<"Masukkan Tinggi prisma: ";
    cin >> tinggi_prisma;

    lp =(2*(1/2.0)*luas_alas *tinggi)+(luas_alas*3*tinggi_prisma);
    volume = (1/2.0)*luas_alas*tinggi*tinggi_prisma;

    cout << "Luas permukaan = " << lp <<endl;
    cout << "Volume = " << volume << endl;
}