#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>

using namespace std;
int main(){

    char a[25]="Abdul Mateen",b[10]="arslan";int i;
    ofstream in("id.bin",ios::out|ios::binary);
    in.write((char*)a,sizeof(char)*25);
    in.write((char*)b,sizeof(char)*10);
    in.close();
 cout<<"\n\n";

    ifstream out("id.bin",ios::in|ios::binary);
    //seekg(0,ios::beg);
    out.read(a,sizeof(char)*25);
    out.read(b,sizeof(char)*10);
    cout<<a<<' ';
    cout<<b;
    
}