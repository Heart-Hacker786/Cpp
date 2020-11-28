#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>

using namespace std;
int main(){

    int a[5],b[5],i;
    for(i=0;i<5;i++){cin>>a[i];}
    ofstream in("input.bin",ios::out|ios::binary);
    in.write((char*)a,sizeof(int)*5);
    in.close();
 cout<<"\n\n";

    ifstream out("input.bin",ios::in|ios::binary);
    //seekg(0,ios::beg);
    out.read((char*)b,sizeof(int)*5);
    for(i=0;i<5;i++){cout<<b[i]<<" ";}
    
}