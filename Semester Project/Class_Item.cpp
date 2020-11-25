#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class Item{
    
    private:
    char name[30],company[40];
    int price,expiry_month,expiry_date,expiry_year;
    
    public:
    Item(char name[],char company[],int price,int date,int month,int year){
        strcpy(this->name,name);
        strcpy(this->company,company);
        this->price=price;
        expiry_date=date;
        expiry_month=month;
        expiry_year=year;
    }
    friend ostream& operator <<(ostream &out,const Item i);
};
ostream& operator <<(ostream &out,const Item i){
    out<<left<<setw(25)<<"Item"<<setw(50)<<"Company"<<setw(7)<<"Price"<<"Expiry Date\n";
    out<<setw(25)<<i.name<<setw(50)<<i.company<<setw(7)<<i.price
    <<right<<setfill('0')<<setw(2)<<i.expiry_date<<"-"<<setfill('0')<<setw(2)<<i.expiry_month<<"-"<<i.expiry_year<<"\n";
    return out;
}
//int main(){
//    Item i("Albuterol Sulfate","China National Chemical Engineering Co",95,8,2,2025);
//    cout<<i;
//    cout<<"this is it\n";
//}
