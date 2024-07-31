
/*Problem statement
You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'POS'.

Note :
Assume that the Indexing for the linked list always starts from 0.
*/


/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    if (head==nullptr) {
        return nullptr;
    }
    if (pos==0) {
        Node* newHead=head->next;
        delete head;
        return newHead;
    }
    Node* current=head;
    Node* prev=nullptr;
    int count=0;
    while (current!=nullptr&&count<pos) {
        prev=current;
        current=current->next;
        count++;
    }
    if (current==nullptr) {
        return head;
    }
    prev->next=current->next;
    delete current;
    return head;
}
