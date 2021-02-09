#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string ip) {
	stack<char> s;
	for(int i=0; i<ip.length(); i++) {
		if(ip[i] == '(' || ip[i] == '[' || ip[i] == '{') {
			s.push(ip[i]);
		} else if(ip[i] == ')') {
			if(s.top() == '('){
				s.pop();
			} else {
				return false;
			}
		} else if(ip[i] == ']') {
			if(s.top() == '['){
				s.pop();
			} else {
				return false;
			}
		} else if(ip[i] == '}') {
			if(s.top() == '{'){
				s.pop();
			} else {
				return false;
			}
		}
	}
	return true;
}

int main() {
	string ip;
	cout<<"Enter the input string : "<<endl;
	cin>>ip;
	cout<<isBalanced(ip);
	return 0;
}
