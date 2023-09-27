#include<iostream>
using namespace std;

template<class X>
class A{
	public:
		void add(X num1, X num2){
			cout<<"Addition is : "<<num1 + num2<<endl;
		}	
};
int main(){
	A<int> d;
	d.add(5,6);
	return 0;
}
