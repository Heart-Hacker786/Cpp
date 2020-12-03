#include<iostream>
#include<string.h>
//#include"Store.cpp"
#include"FileHandling.cpp"
#include"ExtraFunctions.cpp"

using namespace std;

int main(){
    Store S=FileRead();
    login();

int choice=5;

    switch(choice){
        
        case 1:
             S=FileRead();
            cout<<"\n\n"<<S;
            break;
        case 2:
             S=FileRead();
            cout<<"\n\n"<<S;
            break;
        case 3:
             S=FileRead();
            cout<<"\n\n"<<S;
            break;
        case 4:
             S=FileRead();
            cout<<"\n\n"<<S;
            break;
        case 5:
             S=FileRead();
            cout<<"\n\n"<<S;
            break;
        case 6:
            cout<<S;
            break;

    }
    
		cout << "\n\n" << "*******|Enter Operation Number: ";



    return 0;
}