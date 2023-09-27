#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter number : "<<endl;
	cin>>n;
	
	int * ptr = new int[10];
	int mul= 1;
	for(i=0;i<n;i++){
		cin>>ptr[i];
		mul = mul * ptr[i];
	}
	cout<<mul<<endl;
}
