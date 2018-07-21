#include <iostream>
using namespace std;

int main()
{
    long int t,n,m,a,i,j,sum;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        sum=0;
        for (i=1;i<=n;i++)
        {
            a=0;
            for (j=1;j<=i;j++)
            {
                a = a+1;
            }
            sum = sum + a;
            if (sum >= m)
            {
                cout << i << endl;
                break;
            }
        }
        if (sum < m)
        {cout << "-1" << endl;}
    }
cin.get();
cin.get();
return 0;
}
