#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *Previous=NULL;
  Node *Next=NULL;
};

Node *head =NULL;

void InsertStart(int x)
{//cout<<"hey"<<endl;
  Node *newnode = new Node();
  newnode->data=x;
  newnode->Previous=NULL;
  newnode->Next=head;
  //cout<<"new Node data"<<newnode->data<<endl;
  if(head!=NULL)
  {
    head->Previous=newnode;
    head=newnode;
  }
  else
  head = newnode;
}
void InsertLast(int x)
{
  Node *newnode = new Node();
  newnode->data=x;

  if (head==NULL)
  {
    head=newnode;
    newnode->Previous=NULL;
  }

else
{
 Node *temp = head;
  while (head->Next!=NULL)
  {
    head=head->Next;
  }
//  cout<<newnode->data<<endl;
  //cout<<head->data<<endl;
  head->Next=newnode;
  newnode->Next=NULL;

  head =temp;
}
}


void DeleteFirst()
{
  Node *temp =head;
  head=head->Next;
  head->Previous=NULL;
  delete(temp);

}

void DeleteMiddle(int x)
{
  Node *temp= head;
  while(temp->data!=x)
  {
    temp=temp->Next;
  }
      (temp->Previous)->Next=temp->Next;
      delete(temp);
}

void DeleteLast()
{
  Node *temp=head;
  while(temp->Next!=NULL)
  {
    temp=temp->Next;
  }
  //cout<<endl<<temp;
(temp->Previous)->Next=NULL;

//cout<<(temp->Previous)->Next;

delete(temp);


}
void Display()
{
  //cout<<"hey"<<endl;
  Node *temp=head;
  while(temp !=NULL)
  {
    cout<<temp->data<<endl;
    temp=temp->Next;
  }
}

int main()
{
  InsertStart(5);

  InsertStart(4);
  InsertStart(3);

  InsertStart(2);
  InsertStart(1);

//DeleteFirst();
//DeleteMiddle(2);

  Display();
  cout<<endl;
  DeleteMiddle(2);
  cout<<endl;
  Display();
  cout<<endl;
  DeleteLast();
  cout<<endl;
  Display();
  return 0;
}
