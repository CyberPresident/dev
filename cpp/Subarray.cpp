#include <iostream>
using namespace std;

int main()
{
int *intList;

intList = new int [5];

for (int i = 0; i < 5; i++)
    cin >> intList[i];

for (int i = 4; i > 0; i--)
    intList[i] = intList[i] + intList[i - 1];

int sum = 0;
for (int i = 0; i < 5; i++)
{
    cout << intList[i] << " ";
    sum = sum +intList[i];
}

cout << endl << "Sum = " << sum << endl;

return 0;
}
