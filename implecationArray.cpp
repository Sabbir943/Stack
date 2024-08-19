#include<iostream>
using namespace std;
#define Max 20
class stack{
    public:
    int top=-1,arr[Max];
    void push(int data)
    {
      if(top==Max-1)
      {
        cout<<"stack overflow!";
        return ;
      }
      top=top+1;
      arr[top]=data;

    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"stack overflow!";
            return ;

        }
        top=top-1;
    }

    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.display();



    return 0;
}