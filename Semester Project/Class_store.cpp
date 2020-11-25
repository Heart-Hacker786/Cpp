#include<iostream>
#include<string.h>
#include"Class_Item.cpp"

using namespace std;

class Store{
    Item *i;
    char store_name[50];
    
    public:
    Store(int count,char name[]){
        cout<<"store object created sucessfully\n\n";
        i=new Item[count];
        strcpy(this->store_name,name);
    }
};
int main(){
    cout<<"Testing in progress!!!!!!!!\n\n";
    Store s(50,"Islamia Pharmacy");

}