 // sorting
 #include<iostream>
 using namespace std;
 int main(){
 	int i,j,temp, num;
// 	int arr[5]={2,4,1,6,9};
	cout<<"Enter number of elements : "<<endl;
	cin>>num;
	int arr[num];
	cout<<"Enter elements of array : "<<endl;
	for(i = 0; i<num;i++){
		cin>>arr[i];
	}
 	cout<<"Before Sorting : "<<endl;
 	for(i=0;i<num;i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
 	for(i=0;i<num;i++){
 		for(j=0;j<(num-1);j++){
 			if(arr[j] > arr[j+1]){
 				int temp = arr[j+1];
 				arr[j+1] = arr[j];
 				arr[j] = temp;
			 }
		 }
	 }
	cout<<"After Sorting : "<<endl;
 	for(i=0;i<num;i++){
 		cout<<arr[i]<<" ";
	 }
 	
 	return 0;
 }
