#include<iostream>
using namespace std;
int main(){
	int a,b;
//	int arr [5]={1,2,3,4,5},i;
	cout<<"enter the valuve of a and b \n";
	cin>>a>>b;
	try{
		int a=0;
		if(b!=0)
		
		{
			cout<<a/b<<endl;
		}
		else
		throw "0";
	//	while(1)
//		{
//		cout<<arr[i];
//		i++;
//		if(i==5)
//		throw 5;
//		}
//	}
	catch ( const char* x){
		cout<<"division by zero";
	}
//	catch(int y){
//		cout<<"array index outof bound";
//	}
}
