#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of characters"<<endl;
	cin>>n;
	char name[n];
	char* ptr = new char [n+1];
	cin>>name;
	cout<<name<<endl;
}
