#include<iostream>
#include<string.h>
#include"Medicine.cpp"

using namespace std;

class Store{
        public:

    Medicine *m;
    char store_name[50];
    int count;
    
    void copy(int count,const char name[]){

        m=new Medicine[count];
        strcpy(this->store_name,name);
        this->count=count;
    }

    Store(int count=0,char name[]=""){
        copy(count,name);
    }
    void set(int count,char name[]){
        copy(count,name);
    }
    void Medicine_set(int i,char name[],char company[],int price,int date,int month,int year,int stock,char sec[],bool doc){
        m[i].set(name,company,price,date,month,year,stock,sec,doc);
    }

    void operator =(const Store &S){
        copy(S.count,S.store_name);
        m=S.m;
    }

    friend ostream& operator <<(ostream &out,const Store &s);
    friend void Filehandle(const Store &S);
};
ostream& operator <<(ostream &out,const Store &s){
    
    out<<s.store_name<<"\n\n";

    cout<<"No. of Records: "<<s.count<<"\n\n";

    for(int j=0;j<s.count;j++){
        cout<<s.m[j];
    }
    return out;
}
/*
int main(){


    Store M(50,"Islamia Pharmacy");
    for(int i=0;i<50;i++){
        cin>>a>>b>>c>>d>>e>>f;
        M.Medicine_set();
    }
    //ofstream out("Output.bin",ios::out|ios::binary);
}*/
