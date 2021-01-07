#include<iostream>
using namespace std;

int solve(int n){
	// base case
	if(n%10 == 0){
		return 0;
	}
	
	// induction step & recursive call 
	return 1 + solve(n/10);
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"\nThe number of digits present in the number is : "<<solve(n);
	return 0;
}
