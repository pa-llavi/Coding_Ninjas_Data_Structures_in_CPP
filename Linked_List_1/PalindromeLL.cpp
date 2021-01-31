Palindrome LinkedList
Check if a given linked list is palindrome or not. Return true or false.
Indexing starts from 0.
Input format : Linked list elements (separated by space and terminated by -1)

Sample Input 1 :
9 2 3 3 2 9 -1
Sample Output 1 :
true
Sample Input 2 :
0 2 3 2 5 -1
Sample Output 2 :
false



/***************************************************** SOLUTION **********************************************************************/

bool checkPalindrome(Node *head){
	Node *tmp = head;
	stack<int> s;
	
	while(tmp!=NULL){
		s.push(tmp->data);
		tmp = tmp->next;
	}
	
	tmp = head;
	while(tmp != NULL){
		if(s.top() != tmp->data){
			return false;
		}
		tmp = tmp->next;
		s.pop();
	}
	return true;
}
