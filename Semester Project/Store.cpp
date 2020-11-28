#include<iostream>
#include<string.h>
#include"Medicine.cpp"

using namespace std;

class Store{
    Medicine *m;
    char store_name[50];
    int count;
    
    public:
    Store(int count,char name[]){
        
        int price,month,date,year;
        char company[40],namei[30];
        int stock;bool doc;char sec[25];

        m=new Medicine[count];
        strcpy(this->store_name,name);
        this->count=count;
        for(int j=0;j<2;j++){
            cin>>namei>>company>>price>>date>>month>>year>>stock>>sec>>doc;
        m[j].set(namei,company,price,date,month,year,stock,sec,doc);
        }
    }
    friend ostream& operator <<(ostream &out,const Store &s);
};
ostream& operator <<(ostream &out,const Store &s){
    int j;
    out<<"\t\t\t\t\t\t"<<s.store_name<<"\n";
    for(j=0;j<2;j++){
        cout<<s.m[j];
    }
    return out;
}
int main(){
    Store m(50,"Islamia Pharmacy");
    cout<<m;
    return 0;
}