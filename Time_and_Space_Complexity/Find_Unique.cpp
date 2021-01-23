#include<bits/stdc++.h>
using namespace std;

int unique(int arr[], int n){

    int res = arr[0];
	for (int i = 1; i <n; i++) 
        res = res ^ arr[i]; 
  
    return res; 
}

int main(){
	int n;
	cin>>n;
	n = 2*n + 1;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<unique(arr, n);
	return 0;
}
