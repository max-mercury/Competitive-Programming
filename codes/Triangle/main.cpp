#include <iostream>
using namespace std;

int main ()
{
    int x,a,b,c,i,j,sum;
    cin >> x;
    int n1[x],n2[x],n3[x];
    for (i=0;i<x;i++)
    {
        cin >> a >> b >> c;
        n1[i] = a;
        n2[i] = b;
        n3[i] = c;
    }
    for (i=0;i<x;i++)
    {
        if (n1[i] > 0 && n2[i] > 0 && n2[i]>0)
        {
         sum = n1[i]+n2[i]+n3[i];
         if(sum == 180)
         {
         cout << "YES" << endl;
         }
         else if (sum < 180)
         {cout << "NO" << endl;}
         else if (sum > 180)
         {cout << "NO" << endl;}
         else
         {cout << "NO" << endl;}
        }
        else
        {cout << "NO" << endl;}
    }
    return 0;
}

