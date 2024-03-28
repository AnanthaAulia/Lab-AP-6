#include <iostream>
using namespace std;

int main(){
    system("cls");
    float berat,tinggi,bmi;

    cout <<"Masukkan berat badan anda: ";
    cin >> berat;

    cout <<"Masukkan Tinggi anda: ";
    cin >> tinggi ;

    bmi = berat /  tinggi * tinggi;

    if (bmi < 18.5){
        cout <<"Berat badan anda kurang"<<endl;
    }
    else if (18.5 <= bmi && bmi < 25)
        {cout << "Berat badan normal"<<endl;}
    else if (bmi > 25 && bmi < 30)
        {cout <<"Berat badan berlebih"<<endl;}
    else if (bmi > 30)
        {cout << "Obesitas"<<endl;}
    
    return 0;
}