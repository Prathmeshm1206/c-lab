#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	int i = 1;
	while(i<=10){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
		i++;
	}
}
