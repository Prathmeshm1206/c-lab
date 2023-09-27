#include<iostream>
#include<string.h>
using namespace std;
class Date{
	int date ;
	int month ;
	int year ;
	public:
		//default constructor
		Date(){
			date = 18;
			month = 8;
			year = 2008;
		}
		//paramaterized constructor definition
		Date(int , int , int );
		Date(Date&);
		void displayDate();
};
//paramaterized constructor declaration
Date::Date(int d, int m, int y){
	date = d;
	month = m;
	year = y;
}
Date::Date(Date& d){
	date = d.date;
	month = 7;
	year = 2003;
}
//function to display data
void Date::displayDate(){
	cout<<"Date is : "<<date<<"/"<<month<<"/"<<year<<endl;
}
int main(){
	Date d2;
	d2.displayDate();
	Date d3(20,9,2001);
	d3.displayDate();
	Date d4(d3);
	d4.displayDate();
	Date d5(d2);
	d5.displayDate();
	
}

/*
Date is : 18/8/2008
Date is : 20/9/2001
Date is : 20/7/2003
Date is : 18/7/2003
*/
