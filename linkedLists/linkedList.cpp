#include <iostream>
using namespace std;

class Node {
public:
  int Value;
  Node* Next;

};

void printList(Node*n) { // receives the value address
  while(n!=NULL) {
    cout << n->Value << endl;
    n=n->Next;
  }
}

void insertFirst(Node**head, int Value) { // receives the pointer to the pointer brings *head to the function
  // I.create new node
  Node* newNode = new Node();
  newNode->Value = Value;
  // II.put in front
  newNode->Next = *head;
  // III.move the head to the first
  *head = newNode;
}

void insertLast(Node**head, int Value) { // receives the pointer to the pointer brings *head to the function
  // I.create new node
  Node* newNode = new Node();
  newNode->Value = Value;
  newNode->Next = NULL;
  // list is empty?
  if (*head==NULL){
    *head = newNode;
    return;
  }
  // II.find last
  Node* last = *head;
  while(last->Next!=NULL){
    last = last->Next;
  }
  // III.insert last
  last->Next = newNode;
}

void insertAfter(Node*previous, int Value) {
  // previous is NULL?
  if (previous==NULL){
    cout << "previous cannot be NULL"<<endl;
    return;
  }
  // I.create new node
  Node* newNode = new Node();
  newNode->Value = Value;

  // II.insert previous
  newNode->Next = previous->Next;
  previous->Next = newNode;
}

int main()
{
  Node* head = new Node(); //convention standard
  Node* second = new Node();
  Node* third = new Node();

  head->Value = 1;
  head->Next = second;
  second->Value = 2;
  second->Next = third;
  third->Value = 3;
  third->Next = NULL;

  insertFirst(&head, -1);
  insertFirst(&head, -2);
  insertLast(&head, 4);
  insertLast(&head, 5);
  insertAfter(head, 10);
  insertAfter(second, 20);
  printList(head);


  system("pause>0");
}
