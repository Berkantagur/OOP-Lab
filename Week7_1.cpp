/*
#include <iostream >
using namespace std; 

double rect_area(double length , double width){
  return length * width;
}

double rect_area(double length){
  return length * length;
}

int main(){
  cout << "Rectangle has area: " << rect_area(10.0, 5.8) << endl;
  cout << "Square has area: "  << rect_area(10.0) << endl;
  return 0;
}
// Output: 
// Rectangle has area: 58
// Square has area: 100
*/

#include <iostream >
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
    myclass o1[10];   
    myclass o2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i=0; i<10; i++){
        cout << "o1[" << i << "]: " << o1[i].getx()<< "\t";
        cout << "o2[" << i << "]: " << o2[i].getx()<<endl;
    }
    return 0;
}