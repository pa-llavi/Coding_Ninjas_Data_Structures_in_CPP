#include<bits/stdc++.h>
using namespace std;

void print(int arr1[], int n, int arr2[], int m){
	//sorting both the input arrays
	sort(arr1, arr1+n);
	sort(arr2, arr2+m);
	
	int i=0, j=0;
	while(i!=n && j!=m){
		if(arr1[i] < arr2[j]){
			i++;
		} else if(arr1[i] == arr2[j]) {
			cout<<arr1[i]<<endl;
			i++;
			j++;
		} else {
			j++;
		}
	}
}

int main(){
	int n,m;
	cin>>n;
	int arr1[n];
	for(int i=0; i<n; i++){
		cin>>arr1[i];
	}
	cin>>m;
	int arr2[m];
	for(int i=0; i<m; i++){
		cin>>arr2[i];
	}
	
	print(arr1, n, arr2, m);
	
	return 0;
}
