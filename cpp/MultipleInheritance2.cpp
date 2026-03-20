#include <iostream>
using namespace std;

class spades 
{
public:

void Spades(int num) 

    {
    if (num > 5)
        cout << "Queen of spades" << endl;
    else
        cout << "king of spades" << endl;
    }
};

class ginrummy
{
public:

void ginRummy(int num)
    {
    if (num <= 5)
        cout << "queen of hearts" << endl;
    else
        cout << "king of hearts" << endl;
    }
};

class cardgames : public spades, public ginrummy
{
public:

    void cardGames(int num) {
        if (num > 5)
            cout << "they are all cards games anyway, so it does not matter" << endl;
        else
            cout << "Let's play something else." << endl;
    }
};

int main()
{
int x, y, z;
cout << " what is the value of spades: " << endl;
cin >> x;
cout << " what is the value of ginrummy: " << endl;
cin >> y;
cout << " what is the value of cardgames: " << endl;
cin >> z;


cardgames c;

c.Spades(x);
c.ginRummy(y);
c.cardGames(z);

return 0;
}