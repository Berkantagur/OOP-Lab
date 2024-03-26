#include <iostream>
using namespace std;
#define SIZE 20

class mystack
{
    char arrayStack[SIZE];
    int top;
    public:
    mystack(); // constructor
    void push(char ch); // push character on stack
    char pop(); // pop character from stack
};

mystack::mystack()
{
    cout << "Constructing a stack\n";
    top = 0;
}

void mystack::push(char ch)
{
    if (top == SIZE)
    {
        cout << "Stack is full\n";
        return;
    }
    arrayStack[top] = ch; // push character on stack
    top++;
}

char mystack::pop()
{
    if (top == 0)
    {
        cout << "Stack is empty\n";
        return 0;
    }
    top--; // pop character from stack
    return arrayStack[top];
}

int main()
{
    mystack s1, s2; // Create two stacks that are automatically initialized.
    int i;
    s1.push('a'); s2.push('x');
    s1.push('b'); s2.push('y');
    s1.push('c'); s2.push('z');
    for (i = 0; i < 3; i++)
    {
        cout << "Pop s1: " << s1.pop() << "\n";
    }
    
    cout << "\n";

    for (i = 0; i < 3; i++)
    {
        cout << "Pop s2: " << s2.pop() << "\n";
    }

    return 0;
}