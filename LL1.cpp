#include<iostream>
using namespace std;

class Node
{
  public:
    int data;
    Node *next=NULL;
};

Node *head =NULL;

void Insert(int var)
{
  Node  *newnode=new Node();
  newnode->data=var;
  newnode->next=head;
  Node *ptr=head;
  if(head!=NULL)
  {
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
  }
  else
  newnode->next=newnode;
  head=newnode;
}

void Display()
{cout<<"Circular Linked List ";
  Node *temp=head;
  do {
    cout<<temp->data<<"-->";
    temp=temp->next;
  } while(temp!=head);

}
int main()
{
  Insert(5);
  Insert(4);
  Insert(3);
  Insert(2);
  Insert(1);
  Display();
  return 0;
}
