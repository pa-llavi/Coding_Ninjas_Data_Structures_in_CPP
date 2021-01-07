#include<iostream>
using namespace std;

float solve(int x, int y){
	// base case
	if(y == 0){
		return 0;
	}
	
	if(y>0){
		return x + solve(x, y-1);
	}else if(y<0){
		return -(solve(x,-y));
	}
}

int main(){
	int x, y;
	cout<<"Enter the value of x and y : ";
	cin>>x>>y;
	
	cout<<"\nThe product is : "<<solve(x, y);
	return 0;
}
