//copy function is used
#include<iostream>
#include<string.h>
using namespace std;
class constr{
	int len;
	char* ptr;
	public:
		constr(char*);
		//declaration of destructor
		~constr();
		//declaration of copy constructor
		constr(constr&);
		void displayData();
};
constr::constr(char* sptr){
	len = strlen(sptr);
	ptr = new char[len+1];
	strcpy(ptr,sptr);
}
//destructor definition
constr::~constr(){
	if(ptr){
		delete[] ptr;
	}
	len = NULL;
	ptr = NULL;
}
constr::constr(constr &c){
	len = c.len;
	ptr = new char[len+1];
	strcpy(ptr,c.ptr);
}
void constr::displayData(){
	cout<<"Length is : "<<len<<endl;
	cout<<"String is : "<<ptr<<endl;
}
int main(){
	constr c1("yash");
	c1.displayData();
	{
		constr c2(c1);
		c2.displayData();
		c2.~constr();
		//c2.displayData();
	}
	cout<<"======="<<endl;
	c1.displayData();
}

/*
Length is : 4
String is : yash
Length is : 4
String is : yash
=======
Length is : 4
String is : yash*/
