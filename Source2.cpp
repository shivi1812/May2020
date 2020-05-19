#include<iostream>
#include<exception>
#include<fstream>
#include<string>
using namespace std;

#define MAX 4
class queue
{
	private:
		int arr[MAX];
		int front, rear;
		public:
			queue()
			{
				front = -1;
				rear = -1;
			}
			void addq(int item)
			{
				if (rear == MAX - 1)
					throw runtime_error("Queue is Full");

				rear++;
				arr[rear] = item;

				if (front==-1)
					front=0
			}

			int delq()
			{
				int data;
				if (front == rear)
					front = rear = -1;
				else
					front++;
				return data;

			}

			};

			int main()
			{
				queue q;

				try {
					q.addq(11);
					q.addq(10);
					q.addq(12);
					q.addq(15);
					q.addq(13);

					int i;
					i = q.delq();
					cout << "item deleted = " << i << endl;
				}

				catch (exception& err)
				{
					cout << endl << err.what() << endl;

				}
				return 0;
			}