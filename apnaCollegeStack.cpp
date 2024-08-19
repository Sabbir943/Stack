#include<iostream>
using namespace std;
#define n 100

class stack {
    int* arr;
    int top;

public:
    //constructor create
    stack() {
        arr = new int[n];
        top = -1;
    }

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "No element in stack" << endl;
            return -1; // Return an invalid value or throw an exception
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }

    void display() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.display();
    cout << "Peek: " << st.peek() << endl;
    st.pop();
    st.pop();
    st.display();
    cout << "Peek: " << st.peek() << endl;
    return 0;
}
