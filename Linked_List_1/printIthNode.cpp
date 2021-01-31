Print ith node
Given a linked list and a position i, print the node at ith position.
If position i is greater than length of LL, then don't print anything.
Indexing starts from 0.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer i (position)
Output format :
Element at ith position
Sample Input 1 :
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
2
Sample Input 2 :
3 4 5 2 6 1 9 -1
0
Sample Output 2 :
3
/***************************************************** SOLUTION **********************************************************************/


//to find length of LL
int length(Node *head){
	int count=0;
	Node *temp = head;
	while(temp->next != NULL){
		count++;
		temp = temp->next;
	}
	return count+1;
}


void printIthNode(Node *head, int i){
  //check if length of LL is more than i or not
	if(length(head) <= i){
		return;
	}
	
	Node *tmp = head;
	while(i>0){
		tmp = tmp->next;
		i--;
	}
	cout<<tmp->data;	
}
