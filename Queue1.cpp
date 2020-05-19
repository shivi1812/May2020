#include<iostream>
using namespace std;
 #define SIZE 5
 int A[SIZE];
 int front=-1;
 int rear=-1;

bool isempty()
{
  if(front == -1 && rear == -1)
    return true;
  else
    return false;
}
 void enqueue(int val)
 {
   if(rear==SIZE-1)
    cout<<"Queue is full \n"
    else
    {
      if(front==-1)
        front=0;
        rear++;
        A[rear]=val;
      }
  }

void dequeue()
{
  if(isempty())
    cout<<"Queue is empty";
  else
    if(front==rear)
      front=rear=-1;
    else
      front++;
}

void display()
{
  if(isempty())
    cout<<"Queue is Empty\n"
  else
    cout<<"Elemnt at front is "<<A[front];

}


int main()
{
  enqueue(5);
  enqueue(4);
  enqueue(3);
  enqueue(2);
  enqueue(1);
  display();
}
