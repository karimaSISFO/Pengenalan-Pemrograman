#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    double nilai;
    cout<<"Masukkan nilai: ";
    cin>>nilai;
    cout<<endl;
    cout<<setw(15)<<"Nilai"<<endl;
    cout<<setw(15)<<fixed<<setprescision(2)<<nilai<<endl;

    return 0;
}