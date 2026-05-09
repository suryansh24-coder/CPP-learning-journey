#include<iostream>
using namespace std;

class Cart
{
private:
    int total;

public:
    Cart(int t)
    {
        total = t;
    }

    ~Cart()
    {
        cout<<"Final Bill : "<<total<<endl;
    }
};

int main()
{
    Cart c(2500);

    return 0;
}