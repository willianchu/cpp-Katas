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

void insertFirst(Node**head, int Value) { // receives the pointer to the pointer
  // I.create new node
  Node* newNode = new Node();
  newNode->Value = Value;
  // II.put in front
  newNode->Next = *head;
  // III.move the head to the first
  *head = newNode;
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
  printList(head);


  system("pause>0");
}
