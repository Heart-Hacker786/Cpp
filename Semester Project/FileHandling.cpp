#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>
#include"Store.cpp"

using namespace std;


void FileWrite(const Store &S){
    ofstream out("input.bin",ios::out|ios::binary);
    out.seekp(0);
    char a[50];strcpy(a,"Islamia Pharmacy");
    out.write(S.store_name,sizeof(char)*50);

    out.write((char*)&S.count,sizeof(int));


    for(int i=0;i<S.count;i++){
        out.write((char*)&S.m[i],sizeof(Medicine));
        }
    out.close();
}

Store FileRead(){
    
    ifstream in("input.bin",ios::out|ios::binary);
    in.seekg(0);
    
    char a[50];int count;
    in.read(a,sizeof(char)*50);
    in.read((char*)&count,sizeof(int));

Store S(count,a);

Medicine m;
    for(int i=0;i<count;i++){
        in.read((char*)&m,sizeof(Medicine));
        S.m[i]=m;
        }
    in.close();
    return S;
}
