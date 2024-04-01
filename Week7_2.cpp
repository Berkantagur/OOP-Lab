#include <iostream >
using namespace std;
class code
{
    int id;
    int count;

public:
    code()
    {
        cout << "Default constructor called\n";
        id = 0;
        cout << "id=" << id << endl;
    }
    code(int a)
    {
        cout << "Parameterized constructor called\n";
        id = a;
        cout << "id=" << id << endl;
    }
    code(code &x)
    {
        cout << "copy constructor called\n";
        id = x.id;
        cout << "id=" << id << endl;
    }
    void display()
    {
        cout << "id=" << id << endl;
    }
    ~code()
    {
        cout << "\nid=" << id << endl;
        cout << "Object Destroyed" << endl;
    }
};
int main()
{
    code a(100); // calls parameterized constructor
    code b(a);   // calls copy constructor
    code c(a);   // calls copy constructor
    code d;      // calls default constructor
    cout << "\n For object d id=";
    d.display();
    cout << "\n For object a id=";
    a.display();
    cout << "\n For object b id=";
    b.display();
    cout << "\n For object c id=";
    c.display();
    return 0;
}

// Output:
// Parameterized constructor called
// id=100
// copy constructor called
// id=100
// copy constructor called
// id=100
// Default constructor called
// id=0

// For object d id=id=0

// For object a id=id=100

// For object b id=id=100

// For object c id=id=100

// id=0
// Object Destroyed

// id=100
// Object Destroyed

// id=100
// Object Destroyed

// id=100
// Object Destroyed
