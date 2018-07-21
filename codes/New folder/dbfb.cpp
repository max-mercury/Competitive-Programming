#include <iostream>

using namespace std;

int maxim(int a ,int b)
{
    if (a > b)  
        return a;
    else
        return b;    
}

int main()
{
    const unsigned int M = 1000000007;
    long int t,m,n,i,j,c,k;
    long int result;
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        long int a[m],b[m];
        
        for (i=1;i<=m;i++)
        {
            cin >> a[i];
        }
        for (i=1;i<=m;i++)
        {
            cin >> b[i];
        } 
        for (i=1;i<=m;i++)
        {
            for (j=1;j<=m;j++)
            {
                c = maxim(2,n);
                long int fib[c];
                fib[1] = a[i];
                fib[2] = b[j];
                for (k=3;k<=n;k++)
                {
                   fib[k] = fib[k-1] + fib[k-2];     
                }
                result = result + fib[n];    
            }
        }
        cout << result << endl;  
    }
    cin.get();
    cin.get();
    return 0;    
}
