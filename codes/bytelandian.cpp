#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float n;
    while (cin >> n)
    { 
        long int c;
        c = floor(n/2) + floor(n/3) + floor(n/4);
        if (c > n)
        {
            cout << c;
            cout << "\n";
        }
        else
        {
            cout << n;
            cout << "\n";
        }
    }
}
