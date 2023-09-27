#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"in default of A"<<endl;
		}
		~A(){
			cout<<"destructor of A"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"in default of B"<<endl;
		}
		~B(){
			cout<<"destructor of B"<<endl;
		}
};
class C:public A{
	public:
		C(){
			cout<<"in default of C"<<endl;
		}
		~C(){
			cout<<"destructor of C"<<endl;
		}
};
int main(){
	B bobj;
	C cobj;
}
