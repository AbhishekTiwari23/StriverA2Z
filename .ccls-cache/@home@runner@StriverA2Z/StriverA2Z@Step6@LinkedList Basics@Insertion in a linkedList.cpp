#include <bits/stdc++.h>
using namespace std;

#define v vector
#define ll long long

class Node {
public:
  int data;
  Node *next;
  Node() {
    data = 0;
    next = NULL;
  }
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// create a linked list

// insertion a the start
void insert_at_beginning(Node* *head, int data)
{
  Node *temp = new Node(data);
  if (*head == NULL) {
    *head = temp;
  } else {
    temp->next = *head;
    *head = temp;
  }
}

// insertion at the end
// insertion in the middle

// print the linked list
void print_list(Node *head) {
  if (head == NULL) {
    cout << "List is empty" << endl;
  } else {
    while (head != NULL) {
      cout << head->data << " " << endl;
      head = head->next;
    }
  }
}

int main() {
  Node *head = NULL;
  insert_at_beginning(&head,2);
  print_list(head);

  return 0;
}
