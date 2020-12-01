#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Flower_Pack{
protected:
    string fname;
    string gift;
    int price;
    string color;
public:
    Flower_Pack(){
    }
    Flower_Pack(string fname, string gift, string color, int price){
        this->fname=fname;
        this->gift=gift;
        this->color=color;
        this->price = price;
    }
    void SetFlowerPack(string fname, string gift, string color, int price){
        this->fname=fname;
        this->gift=gift;
        this->color=color;
        this->price = price;
    }
    friend ostream& operator << (ostream &out,const Flower_Pack &f){
        out<<"Flower Name:";
        out<<f.fname<<" Gift Type:"<<f.gift<<" Color of Sheet:"<<f.color<<" Price:"<<f.price<<"\n";
        return out;
    }
    friend istream& operator >> (istream &in, Flower_Pack &f){
        cout<<"Flower Name:";
        in>>f.fname;
        cout<<"  gift:";
        in>>f.gift;
        cout<<"  Color:";
        in>>f.color;
        cout<<"  price:";
        in>>f.price;
        return in;
    }
};

class Florist{
    Flower_Pack pack;
    string order_taker;
public:
    Florist(){
    }
    Florist(string order_taker,string fname, string gift, string color, int price){
    this->order_taker=order_taker;
    pack.SetFlowerPack(fname,gift,color,price);
    }
    void set(string order_taker,string fname, string gift, string color, int price){
        pack.SetFlowerPack(fname,gift,color,price);
        this->order_taker = order_taker;
    }
friend void choices();
friend istream& operator >> (istream &in, Florist &ft);
friend ostream& operator << (ostream &out, const Florist &ft);
};

istream& operator >> (istream &in, Florist &ft){
    cout<<"Order Taker's Name: ";
    in>>ft.order_taker;
    //cout<<"Flower Name:";
    in>>ft.pack;
    return in;
}
ostream& operator << (ostream &out, const Florist &ft){
    out<<"\n\t\tBlossom House\n";
    out<<"Order Taker's Name:"<<ft.order_taker<<"\n";
    out<<ft.pack;
    return out;
}

int main(){
    Florist f[5];
    string order_taker[5]={"Ali","Ben","Charlie","Daniel","Elen"};
    string fname[5]={"Lily","Abmber","Blush","Sunflower","Jasmine"};
    string color[5]={"Red","Blue","Purple","Blush","Indigo"};
    string gift[5] = {"Chocolate","Headband","Bangles","Flower Pot","Rings"};
    int price[5]={200,150,97,120,300};
    for(int i=0;i<5;i++)
        f[i].set(order_taker[i],fname[i],gift[i],color[i],price[i]);
    fstream file("Florist.txt",ios::in | ios::out | ios::app);
    file.write((char*)f,sizeof(Florist)*5);
    int n,i,count;
    cout<<"Showing all records\n";
    //up:
    Florist f1,*newF;
    file.seekg(0,ios::end);
    count = file.tellg()/sizeof(Florist);
    file.seekg(0);
    newF = new Florist[count];
    file.read((char*)newF,sizeof(Florist)*count);
    for(i=0;i<count;i++)
        cout<<newF[i];
    delete []newF;
//    goto back;
    //cout<<"entering new record:\n";
    //cin>>f1;
    //file.write((char*)&f1,sizeof(Florist));
    //cout<<"Enter record number:\n";
    //cin>>n;
    //n--;
    //file.seekg(sizeof(Florist)*n);
    //file.read((char*)&f1,sizeof(Florist)*n);
    //cout<<f1;
    //cout<<"\n\nNow printing all records again\n";
    //goto up;
    //back:
    file.close();
    return 0;
}