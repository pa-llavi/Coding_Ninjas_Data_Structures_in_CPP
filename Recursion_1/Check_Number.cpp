#include<iostream>
using namespace std;

bool solve(int a[], int size, int x){
	// base case
	if(size == 0)
		return false;
	
	// induction step
	if(a[0] == x){
		return true;
	}
	
	return solve(a+1, size-1, x);
}

int main(){
	int arr[100], x, size;
	cout<<"Enter the size of the array : ";
	cin>>size;
	cout<<"Enter the elemnets : ";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched : ";
	cin>>x;
	
	if(solve(arr, size, x) == 0){
		cout<<endl<<"False";
	}else{
		cout<<endl<<"True";
	}
	return 0;
}
