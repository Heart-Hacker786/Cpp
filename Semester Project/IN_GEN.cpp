#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>

using namespace std;
int main(){

    int a[5],i;
    for(i=0;i<5;i++){cin>>a[i];}
    ofstream in("input.bin",ios::out|ios::binary);
    in.write((char*)a,sizeof(int)*5);
    
}