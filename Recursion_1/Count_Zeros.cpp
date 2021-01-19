#include<iostream>
using namespace std;

int solve(int n){
	// base case
	if(n == 0){
		return 0;
	}
	
	// induction step & recursive call 
	if(n%10 == 0) {
		return solve(n/10)+1;
	}else {
		return solve(n/10);
	}
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"\nThe total # of 0's are : "<<solve(n);
	return 0;
}
