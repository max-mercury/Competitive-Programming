#include <iostream>
using namespace std;

int main ()
{
    int i,n,k,a[30],ans=0,ct=0,t,j,prod=1;
    cin >> n >>k;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (int i=0; i < n; i++)
    {
        // Pick ending point
        for (int j=i; j< n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                {cout << a[k] << " ";
                ans++;}
 
            cout << endl;
        }
    }
    cout << ans;
    /*for(i=0;i<n;i++)
    {
        t=a[i];
        for (j=i+1;j<n;j++)
        {
        if (t*a[j] > k )
        ct++;
        }
    }
    for (i=0;i<n;i++)
    {
        prod = prod * a[i];
    }
    if (prod > k)
        ct++;
    cout << ans << ct << ans-ct;*/
    cin.get();
    cin.get();
    
    return 0;
}
