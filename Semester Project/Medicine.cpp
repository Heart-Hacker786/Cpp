#include<iostream>
#include<iomanip>
#include<string.h>
#include"Item.cpp"

using namespace std;

class Medicine:public Item{
    bool doc_pres;
    char sec[25];
    public:
    Medicine(char name[]="",char company[]="",int price=0,int date=0,int month=0,int year=0,int stock=0,char sec[]="",bool doc=false):
    Item(name,company,price,date,month,year,stock){
        this->doc_pres=doc_pres;
        strcpy(this->sec,sec);
    }
    void set(char name[],char company[],int price,int date,int month,int year,int stock,char sec[],bool doc){
        Item::set(name,company,price,date,month,year,stock);
        this->doc_pres=doc_pres;
        strcpy(this->sec,sec);
    }
    friend ostream& operator <<(ostream &out,const Medicine m);

    void operator =(const Medicine &M){
        this->doc_pres=M.doc_pres;
        strcpy(this->sec,M.sec);
        strcpy(this->name,M.name);
        strcpy(this->company,M.company);
        this->price=M.price;
        d.set_day(M.d.get_day());
        d.set_month(M.d.get_month());
        d.set_year(M.d.get_year());
        this->stock=M.stock;
    }
};
ostream& operator <<(ostream &out,const Medicine m){
    cout<<Item(m);
    out<<'\n'<<"Section: ";
    out<<m.sec<<'\n';
    out<<"Requires Doctor Prescription:";
    if(m.doc_pres){out<<"Yes\n\n";}
    else {out<<"No\n\n";}
    return out;
}

void Filehandle(const Medicine m[]){
    ofstream out("input.bin",ios::out|ios::binary);
    out.seekp(0);
    char a[50];strcpy(a,"Islamia Pharmacy");
    out.write(a,sizeof(char)*50);
int count=50;
    out.write((char*)&count,sizeof(int));

   // out.write((char*)&S.store_name,sizeof(char)*50);
    for(int i=0;i<count;i++){
        out.write((char*)&m[i],sizeof(Medicine));
        cout<<m[i];
        }
    //out.write((char*)&S.store_name,sizeof(char)*50);
    //for(i=0;i<5;i++){ }
    out.close();
}
