#include<iostream>
#include<vector>
using namespace std;

int solve(int a[], int size, int x, int op[]){
	//base case
	if(size == 0){
		return 0;
	}
	
	//recursive call
	int ans = solve(a+1, size-1, x, op);
	
	//induction 
	
	//add 1 to the whole array
	for(int i=0; i<ans; i++){
		op[i]++;
	}
	// if the element at index 0 is equal to 
	// x then shift the array to right by 1.
	if(a[0] == x){
		for(int i=ans-1; i>=0; i--){
			op[i+1] = op[i];
		}
		//put start index in front of op array
		op[0] = 0;
		ans++;
	}/*else{
		return ans;
	}*/
	return ans;
}

int main(){
	int a[50], x, size, op[50];
	cout<<"\nEnter size of the array : ";
	cin>>size;
	cout<<"Emter the elements : ";
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	cout<<"Enter the element to be searched : ";
	cin>>x;
	int ans = solve(a,size,x,op);
	cout<<"\nThe indices of the element are : ";
	for(int i=0; i<ans; i++){
		cout<<op[i]<<" ";
	}
	cout<<"\nThe total count of the element in the array is : "<<ans;
	return 0;
}
