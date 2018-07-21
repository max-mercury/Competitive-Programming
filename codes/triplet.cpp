#include <iostream>
#define mod 1000000007
using namespace std;

int main ()
{
    long long int t,p,q,r,temp,i,j,k;
    long long int sum;
    static long long int a[100000],b[100000],c[100000];
    cin >> t;
    while (t--)
    {
        cin >> p >> q >> r;
        sum=0;
        for (i=0;i<p;i++)
        {
            cin>>temp;
            a[i]=temp;
        }
        for (i=0;i<q;i++)
        {
            cin >> temp;
            b[i]=temp;    
        }
        for (i=0;i<r;i++)
        {
            cin >> temp;
            c[i]=temp;    
        }
        
        for (i=0;i<p;i++)
        {
            for (j=0;j<q;j++)
            {
                for (k=0;k<r;k++)
                {
                    if (a[i]<=b[j] && b[j]>=c[k])
                    {
                    sum = (sum + ((a[i]+b[j])*(b[j]+c[k])) % mod);
                    }
                }
                
            }
    }
        cout << sum << endl;   
    }
    cin.get();
    cin.get();
    return 0;
}

