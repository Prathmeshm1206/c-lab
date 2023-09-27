#include<iostream>
using namespace std;
class Time{
	int hour;
	int minute;
	int second;
	public:
		Time(int h, int m, int s){
			hour = h;
			minute = m;
			second = s;
		}
		void display(){
			cout<<hour<<" - "<<minute<<" - "<<second<<endl;
		}
		friend void operator+(int y,Time &x);
		friend void operator-(Time &, int y);
};
void operator+(int y,Time &x){
	x.hour = x.hour + y;
	x.minute = x.minute + y;
	x.second = x.second + y;
	cout<<x.hour<<" - "<<x.minute<<" - "<<x.second<<endl;
}

void operator-(Time &x, int y){
	x.hour = x.hour - y;
	x.minute = x.minute - y;
	x.second = x.second - y;
	cout<<x.hour<<" - "<<x.minute<<" - "<<x.second<<endl;
}
int main(){
	int tt,mm,ss;
	cout<<"Enter time : "<<endl;
	cin>>tt;
	cout<<"Enter minute : "<<endl;
	cin>>mm;
	cout<<"Enter second : "<<endl;
	cin>>ss;
	
	Time t1(tt,mm,ss);
	t1.display();
	5+t1;
	
}
