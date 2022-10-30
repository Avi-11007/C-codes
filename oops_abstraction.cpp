#include<iostream>
using namespace std;

class Tradefair
{
    private:
    int coupon;
    public:
    void setCoupons(int c)
    {
        coupon =c;
    }
    int getCoupon()
    {
        return coupon;

    }
};

int main()
{
    Tradefair t;
    t.setCoupons(50);
    cout<<"coupon :"<<t.getCoupon();
    return 0;

}

