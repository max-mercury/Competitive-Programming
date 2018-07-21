#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,i;
    double n;
    cin >> x;
    int a[x];
    for (i=0;i<x;i++)
    {
        cin >> a[i];
    }
    for (i=0;i<x;i++)
    {
        cout << (int)sqrt(a[i]) << endl;
    }
    cin.get();
    return 0;
}
