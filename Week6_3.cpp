#include<iostream>
#include<cstring>
using namespace std;

class inventory{
    char item[20];
    double cost;
    int on_hand;
    public:
    inventory(char *i, double c, int o){
        strcpy(item, i);
        cost = c;
        on_hand = o;
    }
    void show();
};

void inventory::show(){
    cout << item << ": $" << cost << " On hand: " << on_hand << endl;
}

int main(){
    inventory ob("wrench", 4.95, 4);
    ob.show();
    return 0;
}

/*
#include<iostream>
#include<cstring>
using namespace std;

class inventory{
    char item[20];
    double cost;
    int on_hand;
    public:
    inventory(char *i, double c, int o){
        strcpy(this->item, i);
        this->cost = c;
        this->on_hand = o;
    }
    void show();
};

void inventory::show(){
    cout << this->item << ": $" << this->cost << " On hand: " << this->on_hand << endl;
}

int main(){
    inventory ob("wrench", 4.95, 4);
    ob.show();
    return 0;
}
*/

// What is the difference between the two snippets?
// The first snippet uses the 'this' pointer implicitly, while the second snippet uses the 'this' pointer explicitly.
// The 'this' pointer is a pointer that points to the object that invokes the member function. 
// It is used to access the members of the object within the member function.
// In the first snippet, the 'this' pointer is not explicitly used, but it is implicitly used to access the members of the object.
// In the second snippet, the 'this' pointer is explicitly used to access the members of the object.
// Both snippets achieve the same result, but the second snippet makes it clear that the 'this' pointer is being used to access the members of the object.

// What is the output of the program?
// The output of the program is: wrench: $4.95 On hand: 4