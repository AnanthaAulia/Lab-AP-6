#include <iostream>
using namespace std;

//int penjumlahan(int*a,int*b){
//    *a+= *b;

int main(){
    system("cls");

    // //? pointer Declaration
    // //* norlmal variable -> var_name(data), &vara_name(address)
    //int number = 16;
    // //* pointer variable -> var_name(address of pointed variable), * var_name(data of pointed)
    // int* ptrnumber =  number;

    //?pointer as parameter
    //int a = 2;
    //int b = 3;
    //penjumlahan (&a,&b);
    //cout << a << endl;

    //? pointer to pointer
    //int n = 4;
    //int* ptrn = &n;
    //int**ptr_ptrn = &ptrn;

    //cout << "isi variabel n =" << n << endl;
    //cout << "Alamat variabel n =" << &n << endl;
    //cout << "isi variabel ptrn = " << &ptrn  << endl;
    //cout << "isi variabel ptrn_ptrn ="<< ptr_ptrn << endl;
    //cout << "isi variabel yang ditunjukkan oleh ptr_ptrn =" << *ptr_ptrn<< endl;
    //cout << "isi variabel n diakses dari ptr_ptrn =" <<**ptr_ptrn << endl;
    //cout << "alamat memori ptr_ptrn =" << &ptr_ptrn << endl;

    //?contoh sederhana
    //int a = 5;
    //int* ptrn =&a;

    //cout << "isi variable ptra = "<<*ptrn <<endl; 


    //? Dynamic pointer
    int* ptr = new int;     //*memory allocation
    *ptr = 24;
    cout << "isi variable ptr = " << ptr << endl;
    cout << "data yang ada di variable ptr = " << *ptr << endl;
    delete ptr;     //*memory deallocation
    cout << "isi variabel ptr = " << ptr << endl;
    cout << "data yang ada di variabel ptr = " <<*ptr << endl;



}






