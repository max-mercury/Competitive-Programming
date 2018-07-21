#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int i,a[n],count=0,j,k;
        for (i=0;i<n;i++)
        {
            cin >> a[i]; 
        }
        for(i=0;i<n;i++)
        {
            for (j=1;j<n;j++)
            {
                for (k=0;k<n;k++)
                {
                    if (a[i]*a[j] == a[k])
                    {count++;}    
                } 
            }
        }
        cout << count << endl;
        if(count == n) cout << "OK\n";
        else cout << "NOT OK\n";
    }    
}
