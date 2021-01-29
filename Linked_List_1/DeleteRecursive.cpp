Delete node (recursive)
Given a linked list and a position i, delete the node of ith position from Linked List recursively.
If position i is greater than length of LL, then you should return the same LL without any change.
Indexing starts from 0. You don't need to print the elements, just delete the node and return the head of updated LL.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer i (position)
Output format :
Updated LL elements (separated by space)
Sample Input 1 :
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
3 4 5 6 1 9
Sample Input 2 :
3 4 5 2 6 1 9 -1
0
Sample Output 2 :
4 5 2 6 1 9


/***************************************************** SOLUTION **********************************************************************/


Node* deleteRecursive(Node *head, int position) {
	Node *prev = NULL;
    Node *ptr = head;
    
    int pos = 0;
    
    if(position==0)
    {
        head=head->next;
        delete (ptr);
    }
    else
    {
        while(position!=pos)
        {
            ++pos;
            prev=ptr;
            ptr=ptr->next;
        }
        
        if(ptr!=NULL)
        {
            prev->next=ptr->next;
            delete (ptr);
        }
    }
    return head;
}
