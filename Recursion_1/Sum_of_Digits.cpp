#include<iostream>
using namespace std;

int solve(int n){
	// base case
	if(n%10 == 0){
		return 0;
	}
	
	// induction step & recursive call 
	return n%10 + solve(n/10);
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"\nThe sum of digits is : "<<solve(n);
	return 0;
}
