#include <iostream>
using namespace std;
class samp{
    int i;
    public:
    samp(int n){ cout << "Constructing" << endl; i = n; };
    ~samp() { cout << "Destructing" << endl; };
    void set_i (int n) { i = n; };
    int get_i() { return i; };
};

void sqr_it (samp &o){
    o.set_i(o.get_i() * o.get_i());
    cout << "i value in copy a is : " << o.get_i() << endl;
}

int main(){
    samp a(10);
    sqr_it(a);
    cout << "i value in main a is : " << a.get_i() << endl;
    return 0;
}

// Output:
// Constructing
// i value in copy a is : 100
// i value in main a is : 100 -> Eğer ki samp &o şeklinde tanımlanmazsa, a.get_i() değeri 10 olur. 
// Destructing