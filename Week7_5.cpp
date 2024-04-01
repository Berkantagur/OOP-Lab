#include <iostream>
using namespace std;

class Kompleks {
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

    Kompleks operator+(Kompleks obj){
        Kompleks toplam;
        toplam.reel = reel + obj.reel;
        toplam.sanal = sanal + obj.sanal;
        return toplam;
    }

private:
    int reel;
    int sanal;
};

int main(){
    Kompleks k1(2, 3);
    Kompleks k2(4, -1);
    Kompleks k3 = k1 + k2;
    k3.print();
    return 0;
}

// Output:
// 6 + 2i