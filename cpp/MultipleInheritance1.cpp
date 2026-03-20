#include <iostream>
using namespace std;

class party // function called food 
{
    public:

    int meals;
    void food()
    {
    cout << "enter number of meals: ";
    cin >> meals;
    }
};

 class drinks // function called liquor 
 {
    public:

    int drinks;
    void liquor()
    {
        cout << "enter number of drinks: ";
        cin >> drinks;
    }
 };

class bill : public party, public drinks // function called total meals and total drinks
{
    int total_meals;
    int total_drinks;
    int total_bill;

    public:
    void total()
    {
        total_meals = meals * 90;
        total_drinks = drinks * 60;

        total_bill = total_meals + total_drinks;
        cout << "total bill for the party is: " << total_bill;
    }
};

int main()
{
    bill b;
    b.food();
    b.liquor();
    b.total();
    return 0;
}