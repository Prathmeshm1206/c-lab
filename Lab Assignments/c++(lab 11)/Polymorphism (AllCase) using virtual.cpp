#include<iostream>
using namespace std;
class Employee{
	int id;
	public:
		Employee();
		Employee(int);
		void display();
		virtual int findSal()
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
	cout<<"id of employee is : "<<id<<endl;
}


class WageEmployee:public Employee{
	int hrs;
	int rate;
	public:
		WageEmployee();
		WageEmployee(int, int, int);
		void display();
		int findSal();
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
//	Employee::display();
		cout<<"hrs :"<<hrs<<endl;
		cout<<"rate : "<<rate<<endl;
	}
int WageEmployee::findSal(){
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
	cout<<"Salary : "<<findSal();
}
int SalesManager::findSal(){
	return (WageEmployee::findSal()) + (sales * comm);
}
int main(){
	Employee *ptr;
	Employee e1(0);
	ptr = &e1;
//	e1.display();
	cout<<ptr->findSal()<<endl;
	
	WageEmployee we1;
	ptr = &we1;
//	we1.display();
	cout<<ptr->findSal()<<endl;
	
	SalesManager sm1(10,10,10,10,10);
	ptr = &sm1;
	sm1.display();
//	cout<<ptr->findSal();
	cout<<"n\n\n"<<endl;
	
	Employee *ptr1;
	ptr1 = new Employee(10);
	cout<<ptr1->findSal()<<endl;
	
	ptr1 = new WageEmployee(40,20,10);
	cout<<ptr1->findSal()<<endl;
	
	ptr1 = new SalesManager(1,20,30,45,2);
	cout<<ptr1->findSal();
	
	
}
