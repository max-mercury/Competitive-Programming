#include <iostream>

using namespace std;

int main()
{
    long int t,n,i,j,ans;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long int len = n*n;
        long int a[n],b[len];
        
        for (i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                b[(i*n)+j+1] = a[i+1]+a[j+1];
            }    
        }
        ans = 0;
        for (i=1;i<=len;i++)
        {
            ans = ans ^ b[i]; 
        } 
        cout << ans << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
