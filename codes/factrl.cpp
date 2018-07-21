#include <iostream>

using namespace std;

int main()
{
    int x,i,a;
    double n;
    cin >> x;
    int n1[x];
    for (i=0;i<x;i++)
    {
        cin >> a;
        n1[i] = a;
    }
    for (i=0;i<x;i++)
    {
        int fact = 1;
        while (n1[i] != 0)
        {
        fact = fact * n1[i];
        n1[i] = n1[i]-1;
        }
        cout << fact << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
