using namespace std;
float division(int x,int y)
{
	if(y==0){
		throw"attempted to divide by zero";
	}
	return x/y;
}
int main (){
	int i;
	int j;
	float k;
	try{
		cout<<"enter the value of i \n";
		cin>>i;
		cout<<"enter the value of j \n";
		cin>>j;
		k=division(i,j);
		cout<<k<<endl;
		
	}
	catch(const char* e){
		cout<<e<<endl;
	}
	cout<<"end of main"<<endl;

return 0;
}
