#include <iostream>
using namespace std;

int solve(int a[], int n, int x){
	//Base case
	if(n==0){
		return -1;
	}
	
	//induction
	if(a[n-1]==x)
		return n-1;
	int ans = solve(a, n-1, x);
	if(ans==-1){
		return -1;
	}else{
		return ans;
	}
}

int main(){
	int n, a[100], x;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"Enter the # you want to find : ";
	cin>>x;
	cout<< solve(a, n, x);
	return 0;
}
