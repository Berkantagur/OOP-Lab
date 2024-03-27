// Exercise: Write a program to find maximum out of  two numbers using friend function and
// also note one number is a member of one class and other number is member of some other class. 
// By using set function set values of data members.
#include <iostream>
using namespace std;

// Forward declarations
class ClassB;

class ClassA
{
private:
    int numA;

public:
    void setNumA(int num)
    {
        numA = num;
    }

    friend int findMax(ClassA objA, ClassB objB);
};

class ClassB
{
private:
    int numB;

public:
    void setNumB(int num)
    {
        numB = num;
    }

    friend int findMax(ClassA objA, ClassB objB);
};

int findMax(ClassA objA, ClassB objB)
{
    return max(objA.numA, objB.numB);
}

int main()
{
    ClassA objA;
    ClassB objB;

    objA.setNumA(10);
    objB.setNumB(20);

    cout << "Maximum number is: " << findMax(objA, objB) << endl;

    return 0;
}

// Output: Maximum number is: 20

