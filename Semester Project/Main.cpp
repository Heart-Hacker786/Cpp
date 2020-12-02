#include<iostream>
#include<string.h>
//#include"Store.cpp"
#include"FileHandling.cpp"
#include"ExtraFunctions.cpp"

using namespace std;

int main(){
    
    login();

    Store S=FileRead();
    cout<<S;



    return 0;
}