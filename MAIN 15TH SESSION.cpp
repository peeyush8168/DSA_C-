// Given an linked list remove the duplicates from the list.
/*#include<iostream>
using namespace std;
class Node{
 public:
 int val;
 Node* next;
 Node(int data){
  val=data;
  next=NULL;
 }
};
class LinkedList{
 public:
 Node* head;
 LinkedList(){
  head=NULL;
 }
 void insertAtLast(int value){
  Node* new_node=new Node(value);
  if(head==NULL){
  head=new_node;
  return;
  }
  Node* temp=head;
  while(temp->next!=NULL){
  temp=temp->next;
  }
  //reached at last node
  temp->next=new_node;
 }
 void display(){
  Node* temp=head;
  while(temp!=NULL){
  cout<<temp->val<<"->";
  temp=temp->next;
  }
  cout<<"NULL"<<endl;
 }
};
void deleteAlternateNodes(Node* &head){
 Node* currentNode=head;
 while(currentNode!=NULL && currentNode->next!=NULL){
 Node* temp=currentNode->next;//this is to be deleted
 currentNode->next=currentNode->next->next;
 free(temp);
 currentNode=currentNode->next;
 }
}
int main(){
 LinkedList linkedList;
 linkedList.insertAtLast(1);
 linkedList.insertAtLast(2);
 linkedList.insertAtLast(3);
 linkedList.insertAtLast(4);
 linkedList.insertAtLast(5);
 linkedList.display();
 deleteAlternateNodes(linkedList.head);
 linkedList.display();
 return 0;
}
*/


/*
#include<iostream>
using namespace std;
int rsum(int n){
    int d;int s;
    if(n!=0){
        d=n%10;
        n=n/10;
        s=d+rsum(n);
    }
    else
        return 0;
    return s;
}

int main(){
    int num,sum;
    cout<<"Enter a number: ";
    cin>>num;
    sum=rsum(num);
    cout<<sum;
}
*/


// Factorial of a number
/*#include <iostream>
using namespace std;
int main() {
    int n;
    long factorial=1.0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if (n<0)
        cout<<"Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i=1;i<=n;++i){
            factorial*=i;
        }
    cout<<"Factorial of "<<n<<" = "<<factorial;
    }
    return 0;
}
*/


//problem 3 for reverse the linked list recrusive stack

//in this prog. we just reverse the element, we did not make the address reverse

#include<iostream>

using namespace std;

class Node{

 public:

 int val;

 Node* next;

 Node(int data){

  val=data;

  next=NULL;

 }

};

class LinkedList{

 public:

 Node* head;

 LinkedList(){

  head=NULL;

 }

 void insertAtLast(int value){

  Node* new_node=new Node(value);

  if(head==NULL){

  head=new_node;

  return;

  }

  Node* temp=head;

  while(temp->next!=NULL){

  temp=temp->next;

  }

  //reached at last node

  temp->next=new_node;

 }

 void display(){

  Node* temp=head;

  while(temp!=NULL){

  cout<<temp->val<<"->";

  temp=temp->next;

  }

  cout<<"NULL"<<endl;

 }

};

void reversePrint(Node* head){

 //base case

 if(head==NULL){

 return;

 }

 //recursive case

 reversePrint(head->next);

 cout<<head->val<<" ";

}

int main(){

 LinkedList linkedList;

 linkedList.insertAtLast(1);

 linkedList.insertAtLast(2);

 linkedList.insertAtLast(3);

 linkedList.insertAtLast(4);

 linkedList.insertAtLast(5);

 linkedList.display();

 reversePrint(linkedList.head);

 linkedList.display();

 return 0;

}
