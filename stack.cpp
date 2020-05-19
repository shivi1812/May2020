#include<iostream>
using namespace std;

class Stack
{
private:
  int top;
  int arr[5];

  public:
    Stack()
      {
        top=-1;
        for (int i=0;i < 5;i++)
        {
          arr[i]=0;
          }
        }
};

int top=-1;
int arr[5];

        bool isempty()
        {
          if(top==-1)
            return true;
          else
            return false;
          }

        bool isfull()
        {
          if(top==4)
            return true;
          else
            return false;
          }

          void Push(int val)
          {
            if(isfull())
            {
              cout<<"Stack overflow"<<endl;
            }
            else
            {
              top++;   //top at 0
              arr[top]=val;
              }
            }

            int pop()
            {
              if(isempty())
              {
                cout<<"Stack Underflow"<<endl;
                return 0;
              }
              else
              {
                int popvalue =arr[top];
                  arr[top]=0;
                  top--;
                  return popvalue;
              }
            }

           int count()
            {
              cout<<(top+1);
            }

            int peek(int pos)
            {
              if(isempty())
              {
                cout<<"Stack Underflow"<<endl;
                return 0;
              }
              else
              {
                return arr[pos];
                }
            }

            void Change(int pos, int val)
            {
              arr[pos-1]=val;
              cout<<"Value changed at Location "<<pos<<endl;
              }

            void Display()
            {
              cout<<"All Values are -"<<endl;
              for(int i=4;i>=0;i--)
              {
                cout<<arr[i]<<endl;
                }
              }

int main()
{
  //Push(5);
  Push(4);
  Push(3);
  Push(2);
  Push(1);
  //Display();
  //Change(3,8);
  //Display();

  //count();
pop();
Display();
  return 0;
}
