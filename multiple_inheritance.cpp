#include<iostream>
using namespace std;

class Party
{
    public:
    int meals;
    void food()
    {
        cout<<"enter the numbers of meals \n";
        cin>>meals;
    }
};
class Drinks
{
    public:
    int drink;
    void Liquor()
    {
        cout<<"enter the number of drinks \n";
        cin>>drink;
    }
    };

    class Bill : public Party,public Drinks
    {
        int total_meals;
        int total_drinks;
        int total_bill;
        public:
        void total()
        {
            total_meals=meals*90;
            total_drinks=drink*60;
            total_bill=total_meals+total_drinks;
            cout<<"total paisa for party is \n"<<total_bill;
        }
    };
    

int main()
{
   Bill b;
   b.food();
   b.Liquor();
   b.total();

    return 0;
}

