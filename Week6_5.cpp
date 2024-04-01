#include <iostream>
using namespace std;

class samp{
    int i, j;
    public:
    void set(int a, int b) {i=a; j=b;}
    ~samp() { cout << "Destructing" << endl;}
    int get() {return i*j;}
};

int main(){
    samp *p;
    int i;

    p = new samp[10];
    if(!p) {cout << "Allocation error" <<endl;return 1;}
    for (i = 0; i < 10; i++) { p[i].set(i, i); }
    for (i = 0; i < 10; i++) { cout << "Product [" << i << "]: " << p[i].get() << endl; }
    
    delete [] p;
    
    return 0;
}

//new: Bellekte dinamik olarak bellek alanı ayırmak için kullanılır. new operatörü ile bellekte özel bir türde bir veya birden fazla nesne oluşturulabilir. 
//Örneğin, new operatörü bir sınıf türünden bir nesne oluşturmak için kullanılabilir. Bu nesne dinamik bellekte saklanır ve new operatörü, oluşturulan nesnenin bir işaretçisini döndürür.
//delete: Dinamik olarak oluşturulmuş bellek alanını serbest bırakmak için kullanılır. delete operatörü, daha önce new ile oluşturulmuş bir nesnenin 
//bellek alanını geri verir ve bu alanın yeniden kullanılabilir hale gelmesini sağlar. Kod örneğinde, new operatörü kullanılarak samp sınıfından 10 adet nesne
//dinamik olarak oluşturulmuştur. Daha sonra set fonksiyonuyla bu nesnelerin verileri ayarlanmış ve get fonksiyonuyla bu veriler alınarak çıktı olarak yazdırılmıştır. 
//Son olarak, delete [] p; satırı ile bu dinamik olarak oluşturulan bellek alanı serbest bırakılmıştır. Bu, bellek sızıntısını önler ve bellek yönetimini sağlar.