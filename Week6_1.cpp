#include <iostream>
using namespace std;
class product
{
    int pro_code[50];
    float pro_price[50];
    int count;
    public:
        void cnt() { count=0; }
        void getproduct();
        void displaysum();
        void displayproduct();
};

void product::getproduct()
{
    cout<<"Enter product Code:";
    cin>>pro_code[count];
    cout<<"Enter product Cost:";
    cin>>pro_price[count];
    count++;
}

void product::displaysum()
{
    float sum=0;
    for(int i=0;i<count;i++)
        sum = sum+pro_price[i];
    cout<<"Total Value:"<<sum<<"\n";
}

void product::displayproduct()
{
    cout<<"\nCode	Price\n";
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<pro_code[i];
        cout<<" "<<pro_price[i];
    }
    cout<<"\n";
}

int main()
{
    product obj;
    obj.cnt();
    int x;
    do
    {
        cout<<"Enter choice\n";
        cout<<"\n------------";
        cout<<"\n1.Add a product";
        cout<<"\n2.Display a product total value";
        cout<<"\n3.Display all products";
        cout<<"\n4.Quit\n";
        cin>>x;
        switch(x)
        {
            case 1:
                obj.getproduct();
                break;
            case 2:
                obj.displaysum();
                break;
            case 3:
                obj.displayproduct();
                break;
            case 4:
                break;
            default:
                cout<<"Invalid choice\n";
        }
    } while(x!=4);
    return 0;
}