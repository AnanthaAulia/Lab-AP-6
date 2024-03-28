#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("CLS");
    float a,v,t,tl,lp;
    cout << "Masukkan alas segitiga: ";
    cin >> a ;

    cout << "Masukkan Tinggi: ";
    cin >> t ;

    cout << "Masukkan Tinggi limas: ";
    cin >> tl; 

    lp = (1/2.0*a*t)+(3*1/2.0*a*tl);
    v = (1/3.0)*(1/2.0*a*t*tl);

    cout<< fixed << setprecision(2);
    cout << "volume = " << v << endl;
    cout << "Luas permukaan= "<<lp << endl;

}