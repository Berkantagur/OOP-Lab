#include <iostream>
using namespace std;

class myclass{
    int x, y;
    public:
    myclass(int i, int j); // constructor
    void show();
};

myclass::myclass(int i, int j){
    cout << "In constructor\n";
    x = i;
    y = j;
}

void myclass::show(){
    cout << x << " + " << y << " = " << x+y << endl;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    myclass obj(a, b);
    obj.show();
    return 0;
}