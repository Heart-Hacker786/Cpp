#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>

using namespace std;

void handle(){
    int a[5],i;
    ifstream in("input.bin",ios::in|ios::binary);
    in.read((char*)a,sizeof(int)*5);
    for(i=0;i<5;i++){cout<<a[i]<<" ";}
}
int main(){
    cout<<"Testing in progress!!!!!!!!\n\n";
    handle();

}