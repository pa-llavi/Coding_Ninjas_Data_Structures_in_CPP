#include<iostream>
using namespace std;

int power(int x, int n){
	// base case
	if(n == 0){
		return 1;
	}
	
	// induction step & recursive call 
	return x*power(x, n-1);
}

int main(){
	int n,x;
	cout<<"Enter the number and power : ";
	cin>>x>>n;
	cout<<"\nAnswer : "<<power(x, n);
	return 0;
}
