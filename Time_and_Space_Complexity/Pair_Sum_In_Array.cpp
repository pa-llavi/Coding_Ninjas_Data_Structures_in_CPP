#include<bits/stdc++.h>
using namespace std;

void printPair(int arr[], int n, int x){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]+arr[j] == x){
				if(arr[i] < arr[j]){
					cout<<arr[i]<<" "<<arr[j]<<endl;
				} else {
					cout<<arr[j]<<" "<<arr[i]<<endl;
				}
			}
		}
	}
}

int main(){
	int n, x;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cin>>x;
	printPair(arr, n, x);
	return 0;
}
