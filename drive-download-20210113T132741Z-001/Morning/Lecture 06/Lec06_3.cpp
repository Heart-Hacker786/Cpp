#include <iostream>

using namespace std;

class Point2D{	//Point2D lies in first quadrant means x & y are positive
	int x,y;
public:
	Point2D(int vx, int vy){	//Default constructor is overwritten
		x = vx;
		y = vy;
	}
	void set(int vx, int vy){
		setX(vx);	setY(vy);
	}
	void setX(int vx){
		if (vx<0)	x = 0;
		else		x = vx;
	}
	void setY(int vy){
		if (vy<0)	y = 0;
		else		y = vy;
	}
	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}
};

int main(){
	Point2D p1(3,5);
	cout << "X:" << p1.getX() << ",Y:" << p1.getY() << '\n';//only reading value
	p1.set(6, 1);
	cout << "X:" << p1.getX() << ",Y:" << p1.getY() << '\n';//only reading value
	return 0;
}
