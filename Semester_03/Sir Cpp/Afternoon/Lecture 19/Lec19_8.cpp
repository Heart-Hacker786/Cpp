#include <iostream>

using namespace std;

class A{
	int x;
public:
	A(int x){	this->x = x;	}
	int getX() const{	return x;	}
};
class B:public A{
public:
	B(int x):A(x){}
	friend ostream& operator << (ostream &, const B&);
};
ostream& operator << (ostream &out, const B &b){
	out << b.getX() << '\n';
	return out;
}
int main(){
	B b(4);
	cout << b;
	return 0;
}
