#include<iostream>
using namespace std;
class Node
{public:
  int data;
  Node *next=NULL;
};

Node *head=NULL;

void Insert(int var)
{
  Node *newnode=new Node();
  newnode->data=var;
  newnode->next=NULL;
  Node *temp=head;
  if(head!=NULL)

    {
      while(temp->next!=NULL)
    {
    temp=temp->next;
    }
    temp->next=newnode;

  }
  else
  {
    newnode->next=head;
    head=newnode;
  }

}

void Display()
{
  Node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data;
    if(temp->next)
    cout<<"-->";

    temp=temp->next;

  }
}


void Find(int Nnode)
{
  Node *PnthNode =head;
  Node *ptemp=head;
  for(int count=1;count<Nnode;count++)
  {
    ptemp=ptemp->next;
  }
  while(ptemp->next!=NULL)
  {
    ptemp=ptemp->next;
    PnthNode=PnthNode->next;
  }
  //cout<<endl<<PnthNode->data<<endl<<(PnthNode->next)->data;
  141cout<<endl<<"the Nth node from end is ->"<<PnthNode->data;
}

int main()
{
  Insert(1);
  Insert(2);
  Insert(3);
  Insert(4);
  Insert(5);
  Insert(6);
  Insert(7);
  Insert(8);
  Display();
  Find(3);
  return 0;
}
