#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push element onto stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    // Pop element from stack
    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Get the top element
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1; // Consider throwing an exception
        }
        return top->data;
    }

    // Check if stack is empty
    bool empty() {
        return top == nullptr;
    }

    // Display the stack
    void display() {
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Explicit cleanup method to free memory
    
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.display();
    cout << "Peek: " << st.peek() << endl;
    st.pop();
    st.pop();
    st.display();
    cout << "Peek: " << st.peek() << endl;
   // Explicitly clear the stack to free memory
    return 0;
}
