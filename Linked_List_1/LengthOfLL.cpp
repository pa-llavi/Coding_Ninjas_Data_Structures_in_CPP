Length of LL
Send Feedback
Given a linked list, find and return the length of input LL. Do it iteratively.
Input format :
Linked list elements (separated by space and terminated by -1)
Output format :
Length of LL
Sample Input :
3 4 5 2 6 1 9 -1
Sample Output :
7
	
	
/************************************************ SOLUTION ******************************************************************************/

int length(Node *head){
	int count=0;
	Node *temp = head;
	while(temp->next != NULL){
		count++;
		temp = temp->next;
	}
	return count+1;
}
