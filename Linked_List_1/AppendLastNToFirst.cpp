  
AppendLastNToFirst
Given a linked list and an integer n, append the last n elements of the LL to front.
Indexing starts from 0. You don't need to print the elements, just update the elements and return the head of updated LL.
Assume given n will be smaller than length of LL.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)`
Sample Input 1 :
1 2 3 4 5 -1
3
Sample Output 1 :
3 4 5 1 2

/***************************************************** SOLUTION **********************************************************************/

Node *rotate(Node *head, int n){
	int cnt=0, count=0;
	Node *temp=head, *newHead=NULL;
	
	while(temp->next != NULL){
		count++;
		temp = temp->next;
	}
	temp->next = head;
	
	temp = head;
	cnt = count - n;
	for(int i=0; i<cnt; i++){
		temp = temp->next;
	}
	newHead = temp->next;
	temp->next = NULL;
	return newHead;
}
