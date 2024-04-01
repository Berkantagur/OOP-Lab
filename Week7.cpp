// Overview: This program demonstrates the use of function overloading.
/*#include <iostream>
using namespace std;

void SumNum(int A, int B);
void SumNum(int A, int B, int C);
void SumNum(int A, int B, int C, int D);

void SumNum(int A, int B)
{
     cout<< endl << "SUMNUM is : "<< A+B;     
}

void SumNum(int A, int B, int C)
{
     cout<< endl << "SUMNUM is : "<< A+B+C;  
}

void SumNum(int A, int B, int C, int D)
{
     cout<< endl << "SUMNUM is : "<< A+B+C+D;     
}

int main()
{
    SumNum(1,2);
    SumNum(1,2,3);
    SumNum(1,2,3,4);
 
    return 0;
}
*/
-------------------------------------------------------------
/*
#include <iostream>
using namespace std;
class Addition
 {
    public:
    int sum(int a,int b) 
    {
        return a+b;
    }
    int sum(int a,int b, int c) 
    {
       return a+b+c;
    }
 };
int main(void)
{
    Addition obj;
    cout<<obj.sum(20, 15)<<endl;
    cout<<obj.sum(81, 100, 10);
    return 0;
}
*/
-------------------------------------------------------------
/*
#include <iostream>
using namespace std;
class myclass{
    int x;
    public:
    // overload constructor two ways
    myclass() { x = 0; } // no initializer
    myclass(int n) { x = n; } // initializer
    int getx() { return x; }
};
int main(){
    myclass o1(10); // declare with initial value
    myclass o2; // declare without initializer
    cout << "o1: " << o1.getx() << endl;
    cout << "o2: " << o2.getx() << endl;
    return 0;
}
*/