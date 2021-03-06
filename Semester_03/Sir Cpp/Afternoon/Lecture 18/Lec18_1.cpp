#include <iostream>

using namespace std;

//Inheritance: is another form of reusability in OOP
// In inheritance we extend some existing type
// By extend mean the new class has all the properties of existing class plus some additional properties
// People do confuse inheritance with aggregation, both are different, however sometimes same functionality
// can be achieved through both of them

// public Inheritance

// In inheritance child class has all the properties of parent class, however, child class object
// can access only public properties of parent class

class Parent{
public:
	Parent(){	cout << "Parent Class Constructor\n";	} 
	~Parent(){	cout << "Parent Class Destructor\n";	} 
};
class Child:public Parent{ //Here we are doing public inheritance
public:
	Child(){	cout << "Child Class Constructor\n";	} 
	~Child(){	cout << "Child Class Destructor\n";	} 
};
int main(){
	Child c;
	return 0;
}
