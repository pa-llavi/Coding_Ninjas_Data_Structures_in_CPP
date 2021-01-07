#include<iostream>
using namespace std;

int solve(int a[], int size){
	// base case
	if(size == 0){
		return 0;
	}
	
	// recursive call 
	int ans = solve(a+1, size-1);
	
	// induction step
	return a[0] + ans;
}

int main(){
	int size, a[1000];
	cout<<"Enter the size of array : ";
	cin>>size;
	cout<<"Enter the elements : ";
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	
	cout<<"\nThe sum of given array is : "<<solve(a, size);
	return 0;
}
