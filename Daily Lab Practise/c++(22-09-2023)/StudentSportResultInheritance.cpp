#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		int m1,m2,m3,m4,m5;
	public:
		Student(){
			id = 0;
			m1=m2=m3=m4=m5=0;
		}
		Student(int id, int m1,int m2,int m3, int m4,int m5){
			this->id = id;
			this->m1 = m1;
			this->m2 = m2;
			this->m3 = m3;
			this->m4 = m4;
			this->m5 = m5;
		}
		int getData(){
			cout<<"Enter id : "<<endl;
			cin>>id;
			cout<<"Enter 5 marks : "<<endl;
			cin>>m1;
			cin>>m2;
			cin>>m3;
			cin>>m4;
			cin>>m5;
		}
		void displayData(){
			cout<<"Student id is : "<<id<<endl;
			cout<<"Marks are : "<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<endl;
		}
};
class Sport{
	public:
	int sm;
	public:
		Sport(){
			sm = 0;
		}
		Sport(int sm){
			this->sm = sm;
		}
		void getSport(){
			cout<<"Enter Sport Marks : "<<endl;
			cin>>sm;
		}
		void displaySport(){
			cout<<"Marks of Sport : "<<sm<<endl;
		}
};
class Result:public Student, Sport{
	int total;
	float avg;
	public:
//		Result(){
//			total = 0;
//			avg = 0;
//		}	
		int totalMarks(){
			total = m1 + m2 + m3 + m4 + m5 + sm;
			return total;
		}
		int avgMarks(){
			avg = (float)total/6;
			return avg;
		}
		void displayResult(){
			Student::getData();
			Sport::getSport();
			Student::displayData();
			Sport::displaySport();
			Result::totalMarks();
			Result::avgMarks();
			cout<<"Total Marks : "<<total<<endl;
			cout<<"Average Marks : "<<avg<<endl;
		}
};
int main(){
	Result r1;
	r1.displayResult();
}
