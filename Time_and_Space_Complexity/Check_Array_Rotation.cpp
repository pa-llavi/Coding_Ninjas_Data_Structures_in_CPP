#include<bits/stdc++.h>
using namespace std;

int rotation(int arr[], int n){
	int s=0, e=n-1;
	
	while (s<=e && arr[s]>arr[e]){
		int m = s + (e-s)/2;
		if(arr[m] > arr[e]){
			s = m+1;
		} else {
			e = m;
		}
	}
	return s;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<rotation(arr, n);
	return 0;
}
