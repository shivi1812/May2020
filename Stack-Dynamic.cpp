#include<iostream>
using namespace std;

 class Stack
 {
 public:
   int totalsize;
   int currentsize;
   int *arr;

   Stack(int size)
   {
     this->totalsize=size;
     this->currentsize= 0;
     this->arr= new int[this->totalsize];
   }

   bool isempty()
    {
    	return this->currentsize == 0;
    }
   bool isfull()
     {
     	return this->currentsize == this->totalsize;
     }

  void Push(int value)
  {
   if(isfull())
   {
     cout<<"OVERFLOW"<<endl;
   }
   else
   {
     this->arr[this->currentsize]=value;
     this->currentsize++;
   }
  }

  int Pop()
  {
   if(isempty())
   {
     cout<<"UNDERFLOW"<<endl;
   }
   else
   {
     this->currentsize--;
     return this->arr[this->currentsize];
   }
  }

 int Peek()
 {
   if(isempty())
   {
     cout<<"No Item To Return"<<endl;
     return -1; //0 karke dekh yaha pe
   }
   else
   {
     return this->arr[this->currentsize];
   }
 }

      void Display()
        {
          do {
            cout<<arr[this->currentsize]<<endl;
          } while(this->currentsize==totalsize);
	}
};


 void main()
 {
   Push(5);
   Push(4);
   Push(3);
   Push(2);
   Push(1);
   Display();

 }
