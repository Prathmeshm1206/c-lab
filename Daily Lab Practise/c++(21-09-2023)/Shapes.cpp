#include<iostream>
using namespace std;
class Shape{
	double side;
	double area;
	public:
		Shape(){
			side = 0.0;
			area = 0.0;
		}
		double areaValue(){
			return 0;
		}
		void displayArea(){
			cout<<"area of shape is : "<<endl;
		}
};
class Square: public Shape{
	public:
		Square(){
			area = 0;
		}
		Square(double a){
			side = a;
		}
		double areaValue();
		void displayArea();
};
double Square::areaValue(){
	area = a*a;
}
void Square::displayArea(){
	cout<<"Area of Square is : "<<area<<endl;
}
int main(){
	Square s2(5);
	s2.areaValue();
}
