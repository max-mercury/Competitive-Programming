#include <iostream>

using namespace std;

int main()
{
    int t,n,i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n],ct=0;
        for(i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        for (i=1;i<=n;i++)
        {
            if (a[i] > 0 && a[i+1] > 0)
            {
               if (i+2<=n)
               {
                    a[i] = a[i]-1;
                    a[i+1] = a[i+1]-1;
                    a[i+2] = a[i+2]+1;
                }
                else
                {
                    a[i] = a[i]-1;
                    a[i+1] = a[i+1]-1;
                    a[i+2]=1;
                } 
            }
            ct++;
        }
        for(i=1;i<=n;i++)
        {cout << a[i]<<endl;}
        cout << ct <<endl; 
    }
    cin.get();
    cin.get();
    return 0;
}
