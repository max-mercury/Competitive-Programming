#include <iostream>

using namespace std;

int main()
{
    int t,p;
    cin >> t;
    while(t--)
    {
        cin >> p;
        while(p--)
        {
            int i,n,q,j,k;
            int count;
            cin >> i >> n >> q;
            int a[n];
            int sum = 0;
            // head = 0; tail =1;
            if(i==1)
            {
                for (j=0;j<n;j++)
                    a[j] = 1;
            }
            else
            {
                for (j=0;j<n;j++)
                    a[j] = 0;
            }
            for (j=0;j<n;j++)
            {
                for (k=0;k<j;k++)
                    a[k] = !a[k];      
            }
            for (j=0;j<n;j++)
            {
                sum = sum + a[j];    
            }
            if (q == 1)
            {
                cout << n - sum << endl;    
            }
            else
            {
                cout << sum << endl;    
            } 
        }   
    }
    cin.get();
    cin.get();
    return 0;
}
