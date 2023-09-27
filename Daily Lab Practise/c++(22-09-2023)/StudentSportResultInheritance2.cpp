#include<iostream>
using namespace std;
class Student{
	int id;
	int m1,m2;
	public:
		int getid(){
			cout<<"Enter Id : "<<endl;
			cin>>id;
			return id;
		}
		int getm1(){
			cout<<"Enter Mark 1 : "<<endl;
			cin>>m1;
			return m1;
		}
		int getm2(){
			cout<<"Enter Mark 2 : "<<endl;
			cin>>m2;
			return m2;
		}
		void displayData(){
			cout<<"Student id is : "<<id<<endl;
			cout<<"Marks are : "<<m1<<" "<<m2<<endl;
		}
};
class SportMarks{
	int sm;
	public:
		int getsm(){
			cout<<"Enter Sport Mark  : "<<endl;
			cin>>sm;
			return sm;
		}
		void displaySport(){
			cout<<"Marks of Sport : "<<sm<<endl;
		}
};
class Result:public Student, public SportMarks{
	int total;
	float avg;
	public:
//		Student s1;
//		s1.getid();
//		s1.getm1();
//		s1.getm2();
		int totalMarks(){
			total = getm1() + getm2() + getsm();
			return total;
		}
		int avgMarks(){
			avg = (float)total/3;
			return avg;
		}
		void displayResult(){
			Result::totalMarks();
			Result::avgMarks();
			cout<<"Total Marks : "<<total<<endl;
			cout<<"Average Marks : "<<avg<<endl;
		}
};
int main(){
	Result r1;
//	r1.getid();
//	r1.getm1();
//	r1.getm2();
//	r1.getsm();
	r1.displayResult();
}
