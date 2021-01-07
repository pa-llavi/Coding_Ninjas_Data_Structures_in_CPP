#include<iostream>
using namespace std;

float solve(int k){
	// base case
	if(k == 0){
		return 1;
	}
	
	// recursive call and induction step
	return 1 + 0.5*solve(k-1);
}

int main(){
	int k;
	cout<<"Enter the value of k : ";
	cin>>k;
	
	cout<<"\nThe sum of GP is : "<<solve(k);
	return 0;
}
