/*#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of characters"<<endl;
	cin>>n;
	char* ptr = new char [n+1];
	cin>>ptr;
	int n1;
	cout<<"Enter no of subjects : "<<endl;
	cin>>n1;
	int sum = 0;
	int* marks = new int[n1];
	for(int i=0;i<n1;i++){
		cin>>marks[i];
		sum = sum + marks[i];
	}
	float avg = (float)sum/n1;
	cout<<ptr<<" "<<avg<<endl;
	
	delete[] ptr;
	delete[] marks;
	
	return 0;
}*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int stunum;
	cout<<"Enter number of students : ";
	cin>>stunum;
	int n1;
	int sum = 0;
	int n;
	char* ptr = new char [n+1];
	int* marks = new int[n1];
	for(int i=0; i<stunum;i++){

	cout<<"Enter number of characters"<<endl;
	cin>>n;

	cin>>ptr;

	cout<<"Enter no of subjects : "<<endl;
	cin>>n1;


	for(int i=0;i<n1;i++){
		cin>>marks[i];
		sum = sum + marks[i];
	}
	float avg = (float)sum/n1;
	cout<<ptr<<" "<<avg<<endl;
}

	
	delete[] ptr;
	delete[] marks;
	
	return 0;
}
