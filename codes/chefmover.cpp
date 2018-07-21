#include <iostream>

using namespace std;

int main()
{
    int t,n,d,i,j,k,p,q;
    cin >> t;
    while(t--)
    {
        cin >> n >> d;
        int a[n];
        int ct=0;
        bool ans = false;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            cout << a[i] <<endl;
        }
        
        for(i=0;i<n;i++)
        {
            j=i+d;
            p = a[i];
            q = a[j];
            while(p!=q)
            {
                if(p < q)
                {
                    q = q-1;
                    p = p+1;
                    ct++;
                }
                else if (p == q)
                {
                    break;
                }
                else
                {
                    p = p-1;
                    q = q+1;
                    ct++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout << a[i] <<endl;
        }
        
        k=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]==k)
            {ans = true;}
            else
            {ans=false;}
        }
        if(ans)
        {
        cout << ct <<endl;
        }
        else
        {cout << "-1"<<endl;}
    }
    cin.get();
    cin.get();
    return 0;
    
}
