#include<iostream>
using namespace std;

int main(){
	int num, orgnum, newnum=0, rem = 0;
	cout<<"Enter Number"<<endl;
	cin>>num;
	
	orgnum = num;
	
	while(num != 0){
	rem = num % 10;
	num = num / 10;
	newnum = newnum + rem * rem * rem;
	}
	if(newnum == orgnum)
		cout<<"Armstrong Number"<<endl;
	else
		cout<<"Not Armstrong Number"<<endl;
		
	return 0;
}
