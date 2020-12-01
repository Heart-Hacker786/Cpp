#include<iostream>
#include<string.h>
#include"Medicine.cpp"

using namespace std;

class Store{
    Medicine *m;
    char store_name[50];
    int count;
    
    void copy(int count,char name[],char iname[],char company[],int price,int date,int month,int year,int stock,char sec[],bool doc){

        m=new Medicine[count];
        strcpy(this->store_name,name);
        this->count=count;
        for(int j=0;j<count;j++){
           //cin>>namei>>company>>price>>date>>month>>year>>stock>>sec>>doc;
        m[j].set(iname,company,price,date,month,year,stock,sec,doc);
        }
    }

    public:
    Store(int count=0,char name[]="",char iname[]="",char company[]="",int price=0,int date=0,int month=0,int year=0,int stock=0,char sec[]="",bool doc=false){
        copy(count,name,iname,company,price,date,month,year,stock,sec,doc);
    }
    void set(int count,char name[],char iname[],char company[],int price,int date,int month,int year,int stock,char sec[],bool doc){
        copy(count,name,iname,company,price,date,month,year,stock,sec,doc);
    }
    void Medicine_set(){}


    friend ostream& operator <<(ostream &out,const Store &s);
    friend void Filehandle(const Store &S);
};
ostream& operator <<(ostream &out,const Store &s){
    int j;
    out<<"\t\t\t\t\t\t"<<s.store_name<<"\n";
    for(j=0;j<s.count;j++){
        cout<<s.m[j];
    }
    return out;
}
int main(){


    Store M(50,"Islamia Pharmacy");
    for(int i=0;i<50;i++){
        cin>>a>>b>>c>>d>>e>>f;
        M.Medicine_set();
    }
    //ofstream out("Output.bin",ios::out|ios::binary);
}
