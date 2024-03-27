#include <iostream>
using namespace std;
class myclass{
    int n, k;
    public:
    myclass(int i, int j) { n = i; k = j; }
    friend int isfactor(myclass ob);// declare a friend of myclass
};

int isfactor(myclass ob){
    if(!(ob.n % ob.k)) return 1;
    else return 0;
}

int main(){
    myclass ob1(10, 2), ob2(13, 3);

    if(isfactor(ob1)) cout << "2 is a factor of 10\n";
    else cout << "2 is not a factor of 10\n";

    if(isfactor(ob2)) cout << "3 is a factor of 13\n";
    else cout << "3 is not a factor of 13\n";

    return 0;
}
// Output:
// 2 is a factor of 10
// 3 is not a factor of 13
// Explanation: In this code, we have a class myclass with two private members n and k. 
// The constructor initializes the values of n and k. The function isfactor is declared as a friend of myclass. 
// The function isfactor takes an object of myclass as an argument and checks if the value of n is divisible by the value of k. 
// If it is divisible, the function returns 1, otherwise it returns 0. 
// In the main function, we create two objects of myclass, ob1 and ob2, with values (10, 2) and (13, 3) respectively. 
// We then call the isfactor function on ob1 and ob2 to check if 2 is a factor of 10 and if 3 is a factor of 13. 
// The output shows that 2 is a factor of 10 and 3 is not a factor of 13. 
// This demonstrates how friend functions can access private members of a class.