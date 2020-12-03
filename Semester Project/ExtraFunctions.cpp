#include<iostream>
#include<string.h>

using namespace std;

void login(){
	char a[25],b[10],c[25],d[10];

again:

    ifstream data;
	data.open("id.bin", ios::in|ios::binary);

	cout << "Enter Login Id : ";
	cin>>c;
    data.read(a,25);
	
    cout << "Enterthe Password : ";
	cin>>d;
    data.read(a,25);

	if (strcmp(a,c)==0 && strcmp(b,d)==0)
		{

		cout << "\t  _____________________________________________" << endl;
		cout << "\t |                                             |" << endl;
		cout << "\t |         ***************************         |" << endl;
		cout << "\t |         ***************************         |" << endl;
		cout << "\t |         ***************************         |" << endl;
		cout << "\t |         ***********WELCOME*********         |" << endl;
		cout << "\t |         ***************************         |" << endl;
		cout << "\t |         ***************************         |" << endl;
		cout << "\t |         ***************************         |" << endl;
		cout << "\t |         *******|1.Search a Medicine         |"<< endl;
		cout << "\t |         *******|2.Enter New Medicine        |"<< endl;
		cout << "\t |         *******|3.Modify a Medicine         |" << endl;
		cout << "\t |         *******|4.Show a Medicine           |" << endl;
		cout << "\t |         *******|5.Bill some Medicines       |" << endl;
		cout << "\t |         *******|6.Show All Medicines        |" << endl;
		cout << "\t |_____________________________________________|" << endl;
		cout << "\n\n" << "*******|Enter Operation Number: ";
		
}
cout<<"Wrong User Name or Password Please try again.";
goto again;

}