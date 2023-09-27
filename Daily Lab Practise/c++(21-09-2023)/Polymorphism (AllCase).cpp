#include<iostream>
using namespace std;
class Employee{
	int id;
	public:
		Employee();
		Employee(int);
		void display();
		int findSal()
		{
			return 0;
		}
		virtual int findSal1()
		{
			return 0;
		}
};
Employee::Employee(){
	id = 0;
}
Employee::Employee(int i){
	id = i;
}
void Employee::display(){
	cout<<"id : "<<id<<endl;
}


class WageEmployee:public Employee{
	int hrs;
	int rate;
	public:
		WageEmployee();
		WageEmployee(int, int, int);
		void display();
		int findSal();
		int findSal1();
};

WageEmployee::WageEmployee(){
	cout<<"default of wage : "<<endl;
	hrs = 0;
	rate = 0;
}

WageEmployee::WageEmployee(int i, int h, int r):Employee(i)
{
	hrs = h;
	rate = r;
}

void WageEmployee::display(){
	Employee::display();
	cout<<"hrs :"<<hrs<<endl;
	cout<<"rate : "<<rate<<endl;
	}
int WageEmployee::findSal(){
	return (hrs * rate);
}
int WageEmployee::findSal1(){
	return (hrs * rate);
}

class SalesManager:public WageEmployee
{
	int sales;
	int comm;
	public:
		SalesManager();
		SalesManager(int , int , int , int , int );
		void display();
		int findSal();
		int findSal1();
};
SalesManager::SalesManager(){
	sales = 0;
	comm = 0;
}
SalesManager::SalesManager(int i, int h, int r, int s, int c):WageEmployee(i, h, r)
{
	sales = s;
	comm = c;
}
void SalesManager::display(){
	WageEmployee::display();
	cout<<"sales is : "<<sales<<endl;
	cout<<"commission is : "<<comm<<endl;
}
int SalesManager::findSal1(){
	return WageEmployee::findSal() + (sales * comm);
}
int main(){
	Employee *ptr;
	Employee e1(101);
	ptr = &e1;
	e1.display();
	cout<<"Salary with virtual function: "<<ptr->findSal()<<endl;
	cout<<"Salary without virtual function: "<<ptr->findSal1()<<"\n"<<endl;
	WageEmployee we1(102,20,50);
	ptr = &we1;
	we1.display();
	cout<<"Salary with virtual function: "<<ptr->findSal()<<endl;
	cout<<"Salary without virtual function: "<<ptr->findSal1()<<"\n"<<endl;
	SalesManager sm1(103,20,50,100,100);
	ptr = &sm1;
	sm1.display();
	cout<<"Salary with virtual function: "<<ptr->findSal()<<endl;
	cout<<"Salary without virtual function: "<<ptr->findSal1()<<"\n"<<endl;
	cout<<"\n\n"<<endl;
	
	Employee *ptr1;
	ptr1 = new Employee(104);
	cout<<"Salary with virtual function: "<<ptr1->findSal()<<endl;
	cout<<"Salary without virtual function: "<<ptr1->findSal1()<<"\n"<<endl;
	ptr1 = new WageEmployee(105,20,10);
	cout<<"Salary with virtual function: "<<ptr1->findSal()<<endl;
	cout<<"Salary without virtual function: "<<ptr1->findSal1()<<"\n"<<endl;
	ptr1 = new SalesManager(106,20,30,45,322);
	cout<<"Salary with virtual function: "<<ptr1->findSal()<<endl;
	cout<<"Salary without virtual function: "<<ptr1->findSal1()<<"\n"<<endl;
}
