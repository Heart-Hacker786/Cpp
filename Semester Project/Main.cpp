#include<iostream>
#include<string.h>
//#include"Store.cpp"
#include"FileHandling.cpp"
#include"ExtraFunctions.cpp"

using namespace std;

int main(){
    
    login();

int choice=1;

    switch(choice){
        
        case 1:
            Store S=FileRead();
            cout<<S;
            break;




    }
    



    return 0;
}