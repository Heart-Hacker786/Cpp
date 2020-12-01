#include<iostream>
#include<iomanip>
#include<string.h>
#include"Item.cpp"
//#include"FileHandling.cpp"

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


int main(){

Medicine p[50];

     p[0].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[1].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[2].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[3].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[4].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[5].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[6].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[7].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[8].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[9].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[10].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[11].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[12].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[13].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[14].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[15].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[16].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[17].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[18].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[19].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[20].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[21].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[22].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[23].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[24].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[25].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[26].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[27].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[28].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[29].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[30].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[31].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[32].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[33].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[34].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[35].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[36].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[37].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[38].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[39].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[40].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[41].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[42].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[43].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[44].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[45].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[46].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[47].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[48].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
     p[49].set("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025,20,"Genetics",true);
    
    Filehandle(p);
        return 0;
}