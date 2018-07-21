#include <iostream>

using namespace std;

int main()
{
    int n,a[100],luck=0,unluck=0,i;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {luck++;}
        else
        {unluck++;}
    }
    if(luck > unluck)
    {cout << "READY FOR BATTLE" << endl;}
    else
    {cout << "NOT READY"<<endl;}
    return 0;
}
