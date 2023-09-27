//pre defined copy function is not used
#include<iostream>
#include<string.h>
using namespace std;
class constr{
	int len;
	char* ptr;
	public:
		constr(char*);
		void displayData();
		~constr();
};
constr::constr(char* sptr){
	this->len = strlen(sptr);
	ptr = new char[len+1];
	strcpy(ptr,sptr);
}
void constr::displayData(){
	cout<<"length is : "<<len<<endl;
	cout<<"string is :"<<ptr<<endl;
}
constr::~constr(){
	if(ptr){
		delete[] ptr;
	}
	ptr = NULL;
}
int main(){
	constr c1("yash");
	c1.displayData();
	{
		constr c2(c1);
		c2.displayData();
		c2.~constr();
	}
	c1.displayData();
}

/*
length is : 4
string is :yash
length is : 4
string is :yash
length is : 4
string is :+§Ç
*/
