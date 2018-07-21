#include <iostream>
using namespace std;

int main()
{
    unsigned int i,t,n,p;
    cin >> t;
    while(t--)
    {
        cin >> n >> p;
        int a[n];
        int ck=0,hd=0;
        for (i=0;i<n;i++)
        {
            cin >> a[i];
            if (a[i] <= p/10)
            {
                hd++;
            }
            else if (a[i] >= p/2 && a[i] <= p)
            {
                ck++;
            }
        }
        
        if (ck==1 && hd == 2)
        {
            cout << "yes" <<endl;
        }
        else
        {
            cout << "no" <<endl;
        }
    }
    return 0;
    }
