#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next=NULL;
};

Node *top =NULL;

void push(int val)
{
  Node *temp= new Node();
  temp->data=val;
  temp->next=top;
  top=temp;
  delete(temp);
}

void pop()
{
  Node *temp=new Node();
  if(top==NULL)
    return;
  temp=top;
  top=top->next;

}

void display()
{
  while(top!=NULL)
  {
    cout<<top->data<<endl;
    top--;
  }
}



int main()
{
  push(5);
  push(4);
  push(3);
  display();
  return 0;
}
