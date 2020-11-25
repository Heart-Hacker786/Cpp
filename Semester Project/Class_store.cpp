#include<iostream>
#include<string.h>
#include"Class_Item.cpp"

using namespace std;

class Store{
    Item *i;
    char store_name[50];
    int count;
    
    public:
    Store(int count,char name[]){
        cout<<"store object created sucessfully\n\n";
        i=new Item[count];
        strcpy(this->store_name,name);
        this->count=count;
    }
    friend ostream& operator <<(ostream &out,const Store &s);
};
ostream& operator <<(ostream &out,const Store &s){
    int j;
    out<<"\t\t"<<s.store_name;
    for(j=0;j<s.count;j++){
        cout<<s.i[j];
    }
    return out;
}
int main(){
    cout<<"Testing in progress!!!!!!!!\n\n";
    Store s(50,"Islamia Pharmacy");
    cout<<s;
}