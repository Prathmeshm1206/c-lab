#include<iostream>
#include<stdlib.h>
using namespace  std;
class Demo{
	int a ;
	public:
		Demo(){
		a = 10;
	}
	int add(int a){
		this->a=this->a+a;
		return this->a;
	}
};
int main(){
	Demo d1;
	cout<<d1.add(15);

}
