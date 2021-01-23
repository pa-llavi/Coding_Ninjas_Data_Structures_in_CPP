#include<bits/stdc++.h>
using namespace std;

void rotate(int *arr, int n, int x){
	int j;
	for(int i=0; i<x; i++){
		int tmp = arr[0];
		for(j=0; j<n-1; j++){
			arr[j] = arr[j+1];			
		}
		arr[j] = tmp;
	}
}

int main(){
	int n, x;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cin>>x;
	
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
	
	rotate(arr, n, x);
	
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
	
	return 0;
}
