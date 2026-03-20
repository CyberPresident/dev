/* 
1. HEADERS (Libraries)

#include <iostream>     // cin, cout
#include <cstdio>       // scanf, printf
#include <cmath>        // sqrt, pow, abs, floor, ceil
#include <cstdlib>      // rand, srand, abs
#include <ctime>        // time (for seeding random)
#include <vector>       // dynamic arrays
#include <array>        // fixed-size arrays
#include <algorithm>    // sort, max, min, swap

using namespace std;

2. DATA TYPES

(Integers)
int x;                  // whole numbers
short s;                // smaller int
long l;                 // bigger int
long long ll;           // very big int
float f;                // small decimal
double d;               // more precise decimal
char c;                 // single character
bool flag;              // true or false
const int SIZE = 100;   // cannot change


3. VARIABLE FORMAT
data_type variable_name = value;

int age = 21;
double price = 19.99;
char grade = 'A';
bool passed = true;


4. FUNCTION FORMAT 
return_type function_name(parameters)
{
    body
    return value;   // only if NOT void
}

int add(int a, int b)
{
    return a + b;
}

void printHello()
{
    cout << "Hello";
}


5. MAIN FUNCTION

int main()
{
    // variable declarations
    int a = 5;
    int b = 10;

    // function call
    int result = add(a, b);

    cout << result;

    return 0;
}


6. LOOPS

// For loop
for (int i = 0; i < 10; i++)
{
    cout << i;
}

// While loop
int i = 0;
while (i < 10)
{
    cout << i;
    i++;
}


=============================
   7. ARRAYS
============================= 

// Fixed array
int arr[5] = {1,2,3,4,5};

// Access
arr[0];     // first element

// Dynamic array
vector<int> v;

v.push_back(10);
v[0];


 =============================
   8. POINTER BASICS
============================= 

int x = 5;
int* p = &x;     // pointer holds address of x

*p = 10;         // changes value of x


=============================
   9. RANDOM NUMBERS
============================= 

srand(time(0));          // seed once
int r = rand() % 10;     // random 0–9


 =============================
   10. COMMON MISTAKES
============================= 

// Wrong loop boundary
// for (int i = 0; i <= n; i++)   

// Correct
// for (int i = 0; i < n; i++)    
*/

