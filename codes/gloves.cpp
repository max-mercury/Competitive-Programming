#include <iostream>

using namespace std;

int main()
{
    int t,n,i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int l[n],g[n],h[n],k[n];
        int f=0,b=0,e=0,no=0;
        for (i=1;i<=n;i++)
        {
          cin >> l[i];  
        }
        for (i=1;i<=n;i++)
        {
          cin >> g[i];  
        }
        
        for (i=1;i<=n;i++)
        {
        if (l[i] == g[i])
           { e++;}
        else if (l[i] < g[i])
            {f++;}
        }
        
        for (i=1;i<=n;i++)
        {
            k[i]=g[n+1-i];
        }
        
        if (e == n)
            cout << "both";
        else if (f == n)
            cout << "front";
        else 
        {
            for (i=1;i<=n;i++)
            {
                if (l[i] <= k[i])
                {b++;}
                else
                { no++;}
            }
            if (b==n)
            {cout << "back";}
            else{
                cout << "none";
            }
        }
        cout << "\n";
        
    }
    cin.get();
    cin.get();
    return 0;
}
