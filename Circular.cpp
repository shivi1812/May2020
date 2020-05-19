#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next=NULL;
};

Node *head= NULL;

void Insert(int x)
{
  Node *newnode=new Node();
  newnode->data=x;
  newnode->next = head;
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

  head = newnode;
}

void Display()
{
  Node *temp=head;
//  cout<<"Shubham";
  // cout<<temp->data;
  // cout<<head->data;
  //cout<<"HEAD: "<<head->data<<endl;
    cout<<temp->data<<"-->";
    temp = temp->next;
  while(temp!=head)
  {
    cout<<temp->data<<"-->";
    temp=temp->next;
  }
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
