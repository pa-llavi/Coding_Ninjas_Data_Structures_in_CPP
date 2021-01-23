#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n){
	vector<int> tmp(n,0);
	for(int i=0; i<n; i++){
		if(tmp[arr[i]] == 1){
			return arr[i];
		}
		tmp[arr[i]]++;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<duplicate(arr, n);
	return 0;
}
