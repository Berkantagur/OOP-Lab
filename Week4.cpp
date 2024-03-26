#include <iostream>
using namespace std;

class myclass
{
    int a;
    public:
    myclass(); // constructor
    ~myclass(); // destructor
    void show();
};

myclass::myclass()
{
    cout << "In constructor\n";
    a = 20;
}

myclass::~myclass()
{
    cout << "\nDestructing...\n";
}

void myclass::show()
{
    cout << a;
}

int main()
{
    myclass ob;
    ob.show();
    return 0;
}