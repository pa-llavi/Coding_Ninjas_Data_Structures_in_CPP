#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(char ip[], int s, int e){
	// base case
	if(ip[s]=='\0' || ip[1]=='\0'){
		return true;
	}
	
	if(s >= e){
		return true;
	}
	
	if(ip[s] == ip[e]){
		return isPalindrome(ip, s+1, e-1);
	}else{
		return false;
	}
}

int main(){
	char ip[1000];
	cout<<"Enter the string : ";
	gets(ip);
	int len=0;
	for(int i=0; ip[i]!='\0'; i++){
		len++;
	}
	int ans = isPalindrome(ip, 0, len-1);
	if(ans == 0){
		cout<<"\nFalse";
	}else{
		cout<<"\nTrue";
	}
}
