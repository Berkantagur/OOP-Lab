// Write a program to concatenate two strings using the concepst of operator overloading (+).

#include <iostream>
#include <string>
using namespace std;

class Concatenate
{
    string str1, str2;
    public:
    Concatenate(string s1, string s2)
    {
        str1 = s1;
        str2 = s2;
    }

    Concatenate operator+(Concatenate &obj)
    {
        Concatenate strCat("", "");
        strCat.str1 = str1 + obj.str1;
        strCat.str2 = str2 + obj.str2;
        return strCat;
    }

    void display()
    {
        cout << "Concatenated string 1: " << str1 << endl;
        cout << "Concatenated string 2: " << str2 << endl;
    }
};

int main()
{
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    Concatenate obj1(s1, s2);
    Concatenate obj2(s2, s1);

    Concatenate obj3 = obj1 + obj2;
    obj3.display();

    return 0;
}