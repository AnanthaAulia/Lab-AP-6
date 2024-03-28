#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int nilai;
    
    cout <<"Masukkan nilai:";
    cin >> nilai ;

    //if (nilai < 65) {
    //    cout <<"tidak lulus"<<endl;
    //}
    //else {
    //    cout <<"Lulus"<<endl;
    //}

    // if statement
    //if (nilai < 0)
    //if (nilai <65 ) {
    //    cout << "tidak lulus "<<endl;
    //}
    //else if (nilai >65) {
    //   cout  << "Lulus" << endl;
    //}
    //else if(nilai == 65){
    //   cout << "lulus dengan nilai pas "<<endl;
    //}

    // penggunaan switch
    //switch (nilai) {
    //   case 1:
    //        cout <<"senin"<<endl; break;
    //    case 2:
    //        cout <<"selasa"<<endl; break;
    //    case 3:
    //        cout <<"rabu"<<endl; break;
    //    case 4:
    //        cout <<"kamis"<<endl; break;
    //    case 5:
    //        cout <<"jumat"<<endl; break;
    //   case 6:
    //        cout <<"sabtu"<<endl; break;
    //    case 7:
    //        cout <<"minggu"<<endl; break;
    //    default:
    //    cout << "Tidak valid"<< endl;break;
        //opsional
    //}

    //switch(nilai){
    //    case 90 ... 100:
    //        cout << "A" << endl; break;
    //    case 85 ... 89:
    //        cout << "B+" << endl; break;
    //    case 80 ... 84:
    //        cout << "B" << endl; break;
    //    case 75 ... 79:
    //        cout << "C+" << endl; break;
    //    case 70 ... 74:
    //        cout << "C" << endl; break;
    //    case 65 ... 69:
    //        cout << "D" << endl; break;
    //   case 0 ... 64:
    //        cout << "E" << endl; break;
    //}

    // temporary operator (short hand if-else)
    if (nilai < 0 ){
        cout <<"Negatif"<<endl;
     } else{
        cout <<"Positif"<<endl;
     }
    
}

