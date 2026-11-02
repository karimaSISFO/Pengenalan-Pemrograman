#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout<<"Masukkan Nilai: ";
    cin>>nilai;

    if(nilai >=80){
        cout<<"Grade A"<<endl;
    }else if(nilai >= 70){
        cout<< " Grade B"<<endl;
    }else if(nilai >= 60){
        cout<< " Grade C"<<endl;
    }else{
        cout<<"Grade D"<<endl;
    }
    return 0;
}