#include<iostream>
#include<string.h>
#include"Store.cpp"

using namespace std;

class Medicalstore:public Store{
    bool doc_pres;
    public:
    Medicalstore(int count,char name[],bool doc_pres):Store(count,name){
        this->doc_pres=doc_pres;
    }
};
ostream& operator <<(ostream &out,const Medicalstore &m){
    out<<(Store)m;
    return out;
}
