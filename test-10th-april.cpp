#include <iostream>
using namespace std;

class Node
{
	public:
  int data;
  Node *link;
};

Node *head=NULL;

void InsertStart(int d)
{
  Node *ptr =new Node();
  ptr->data=d;
  ptr->link=head;
  head=ptr;
}

void InsertLast(int d)
{
  Node *ptr = new Node();
  ptr->data=d;
  ptr->link=NULL;
  if (head==NULL)
  {
  head=ptr;
  }
  else
  {
  Node *temp=head;
  while (temp->link != NULL)
  {
    temp=temp->link;
  }
  temp->link=ptr;
}
  }

  void InsertB(int x, int pos)
  {
    Node *newnode= new Node();
    newnode->data=x;
    Node*temp=head;
    Node*store;
    while(temp->data!=pos)
    {
      temp=temp->link;
    }
    store=temp->link;
    temp->link=newnode;
    newnode->link=store;
  }

/*void Between(int data,int n)
{
 Node *toInsert = new Node();
 toInsert->data = data;

  if(n==1)
  {
    toInsert->link=head;
    head=toInsert;
  }
  else
  {
  Node* temp =head;
  for(int i=1;i<n-1;i++)
    {
      temp = temp->link;
    }
  toInsert->link =temp->link;
  temp->link=toInsert;
 }
}*/

void Display()
{
  Node *temp= head;
  while(temp != NULL)
  {
    cout<<temp->data<<endl;
    temp=temp->link;
  }
}

int main()
{
  InsertStart(3);
  InsertStart(5);
  InsertLast(2);
  InsertB(4,5);
  InsertStart(1);
  Display();

  return 0;
}
