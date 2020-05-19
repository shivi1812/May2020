#include<iostream>
using namespace std;

class Node {
public:
  int data;
  Node *prev, *next;
};

Node *head = NULL;

void Insert(int val)
{
  Node newnode = new Node();
  newnode->data = val;
  newnode->prev = NULL;
  newnode->next = head;

  if(head != NULL)
    head->prev = newnode;

    head = newnode;
}

void Display()
{
  while(*head !=NULL)
  {
    cout<<head->data<<endl;
    head=head->next;
  }
}

int main()
{
  Insert(3);
  Insert(1);
  Insert(2);
  Insert(4);
  Insert(5);
  Display();
  return 0;
}
