#include <iostream>
using namespace std;

class Kompleks{
public:
    Kompleks(int r = 0, int s = 0){
        reel = r;
        sanal = s;
    }

    int getReel(){
        return reel;
    }

    int getSanal(){
        return sanal;
    }

    void setReel(int r){
        reel = r;
    }

    void setSanal(int s){
        sanal = s;
    }

    void print(){
        if (sanal > 0)
            cout << reel << " + " << sanal << "i" << endl;
        else if (sanal < 0)
            cout << reel << " - " << -sanal << "i" << endl;
        else
            cout << reel << endl;
    }

private:
    int reel;
    int sanal;
};
Kompleks operator+(Kompleks obj1, Kompleks obj2){
    Kompleks toplam;
    toplam.setReel(obj1.getReel() + obj2.getReel());
    toplam.setSanal(obj1.getSanal() + obj2.getSanal());
    return toplam;
}

int main(){
    Kompleks k1(2, 3);
    Kompleks k2(4, -1);
    Kompleks k3 = k1 + k2;
    k3.print();
    return 0;
}

// Output:
// 6 + 2i