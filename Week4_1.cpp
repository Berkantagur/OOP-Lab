#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define SIZE 40

class strtype
{
    char *p;
    int len;
    public:
    strtype(); // constructor
    ~strtype(); // destructor
    void set(char *ptr);
    void show();
};

strtype::strtype() // allocate memory for p when strtype object is created
{
    p = (char *)malloc(SIZE);
    if(!p)
    {
        cout << "Memory Allocation Error!\n";
        exit(1);
    }
    *p = '\0';
    len = 0;
}

strtype::~strtype() // free memory when strtype object is destroyed
{
    cout << "Freeing p...\n";
    free(p);
}

void strtype::set(char *ptr) // set the string in p
{
    if(strlen(ptr) >= SIZE)
    {
        cout << "String too big!\n";
        return;
    }
    strcpy(p, ptr);
    len = strlen(p);
}

void strtype::show() // display the string and its length
{
    cout << p << " - length: " << len << endl;
}

int main()
{
    strtype s1, s2;
    char str1[] = "This is a array of caharacters.";
    char *pStr;
    pStr = str1;
    s1.set(pStr);
    s2.set("I like C++.");
    s1.show();
    s2.show();
    return 0;
}