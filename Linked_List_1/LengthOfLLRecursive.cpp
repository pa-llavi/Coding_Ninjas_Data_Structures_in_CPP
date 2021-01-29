Length of LL (recursive)
Given a linked list, find and return the length of input LL recursively.
Input format :
Linked list elements (separated by space and terminated by -1)
Output format :
Length of LL
Sample Input :
3 4 5 2 6 1 9 -1
Sample Output :
7

/***************************************************** SOLUTION **********************************************************************/

int length(Node *head){
	if(head->next == NULL){
		return 1;
	}
	return length2(head->next) + 1;
}
