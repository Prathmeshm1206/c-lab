#include<iostream>
#include<string.h>
using namespace std;
class StringPrint{
	int len;
	char* ptr;
	public:
		StringPrint(char *);
		StringPrint(char, int);
		StringPrint(int);
		StringPrint();
		void display();
		
};
StringPrint::StringPrint(char* ptr1){
	len = strlen(ptr1);
	ptr = new char[len+1];
	strcpy(this->ptr, ptr1);
}
StringPrint::StringPrint(char ch, int len){
	int i = 0;
	this->len=len;
	ptr = new char[this->len];
	for(i=0;i<this->len;i++){
		ptr[i]=ch;
		cout<<ptr[i];
	}
	ptr[i]='\0';
	cout<<endl;
}
StringPrint::StringPrint(int len){
	this->len = len;
	ptr = new char[this->len+1];
	char ch [this->len+1];
	cout<<"Enter String"<<endl;
	cin>>ch;
	strcpy(ptr, ch);
}
StringPrint::StringPrint(){
	int len;
	cout<<"Enter length : "<<endl;
	cin>>len;
	char ptr1 [len+1];
	this->len=len;
	ptr = new char[this->len + 1];
	cout<<"Enter String\n";
	cin>>ptr1;
	strcpy(ptr, ptr1);
}
void StringPrint::display(){
	cout<<"String is :"<<ptr<<endl;
	cout<<"Length is :"<<len<<endl;
}
int main(){
	StringPrint s1("yash");
	s1.display();
	StringPrint s2('*',50);
	StringPrint s3(2);
	s3.display();
	StringPrint s4;
	s4.display();
}
