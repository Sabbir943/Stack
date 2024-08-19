#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
    Node(int data)
    {
        this->data=data;
        this->link=NULL;
    }

};
class stack{
public:
Node* top;
stack()
{
    top=NULL;
}

void push(int);
void peek();
void pop();
void display();
bool isEmpty();
};

void stack::push(int data)
{
    Node* temp=new Node(data);
    if(!temp)
    {
        cout<<"stack overflow!"<<endl;
        return;
    }
    temp->data=data;
    temp->link=top;
    top=temp;
}
bool stack::isEmpty()
{
    return top==NULL;
}
void stack::peek()
{
   if(!isEmpty())
   {
    cout<<top->data<<endl;
    return;
   }
   
}
void stack::pop()
{
    Node* temp;
    if(top==NULL)
    {
        cout<<"stack overflow!"<<endl;
        return;
    }
    temp=top;
    top=top->link;
    delete (temp);


}
void stack:: display()
{
    Node* temp;
    if(top==NULL)
    {
      cout<<"the stack overflow"<<endl;
      return ;
    }
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
 int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    cout<<endl;
    s.peek();
    cout<<endl;
    s.pop();
    s.pop();
    s.display();

    return 0;
}