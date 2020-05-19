#include<iostream>
using namespace std;
class sample2;
class sample1
{
    private:
    int data1;
    public:
    sample1()
    {
        data1=100;
    }
    friend void accessone(sample1);
    friend void accessboth(sample1,sample2);
};

class sample2
{
    private:
    int data2;
    public:
    sample2()
    {
        data2=200;
    }
    friend void accessboth(sample1,sample2);
};

void accessone(sample1 x)
{
    cout<<x.data1<<endl;
}

void accessboth(sample1 x, sample2 y)
{
    cout<<x.data1+y.data2<<endl;
}
int main()
{
    sample1 a;
    sample2 b;
    accessone(a);
    accessboth(a,b);
    return 0;
    
}