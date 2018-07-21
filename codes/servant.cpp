#include <iostream>

using namespace std;

int main()
{
    int x,i,a;
    cin >> x;
    int n1[x];
    for (i=0;i<x;i++)
    {
        cin >> a;
        n1[i] = a;
    }
    for (i=0;i<x;i++)
    {
        if (n1[i] < 10)
        {
        cout << "What an obedient servant you are!" << endl;
        }
        else 
        cout << "-1" << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
