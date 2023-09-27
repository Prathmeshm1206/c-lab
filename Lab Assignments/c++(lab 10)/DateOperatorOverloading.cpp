#include<iostream>
using namespace std;
class Date{
	int date;
	int month;
	int year;
	public:
		Date(int d, int m, int y){
			this->date = d;
			this->month = m;
			this->year = y;
		}
		void display(){
			cout<<date<<" / "<<month<<" / "<<year<<endl;
		}
		friend void operator+(Date &, int);
		friend void operator-(Date &, int);
		
};
void operator+(Date &x,int y){

	x.date = x.date +y;
	x.month = x.month + 5;
	x.year = x.year + 7;
	cout<<x.date<<" - "<<x.month<<" - "<<x.year<<endl;
}

void operator-(Date &x, int y){
	x.date = x.date - y;
	x.month = x.month-y;
	x.year = x.year - y;
	cout<<x.date<<" - "<<x.month<<" - "<<x.year;
}
int main(){
    int dd,mm,yy;
    cout<<"Enter Day:";
    cin>>dd;
    cout<<"Enter Month:";
    cin>>mm;
    cout<<"Enter Year:";
    cin>>yy;
    
    Date d1(dd,mm,yy);
	d1.display();
   	d1+2;
   	d1-5;
   
}

