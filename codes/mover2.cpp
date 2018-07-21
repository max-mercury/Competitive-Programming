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
        int ct=0,temp,an=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for (i=0;i<n-1;i++)
        {
            j=i+d;
            while(a[i]>=1 && a[j]>=1)
            {
                if (a[i]==a[j])
                {
                break;
                }
                else if (a[i]-a[j]==1 || a[j]-a[i]==1)
                {
                    break;
                }
                else if(a[i]>a[j])
                {
                    a[i]=a[i]-1;
                    a[j]=a[j]+1;
                    ct++;
                }
                else
                {
                    a[i]=a[i]+1;
                    a[j]=a[j]-1;
                    ct++;
                }
            }
        }
        temp=a[0];
        for(i=1;i<n;i++)
        {
            if(temp==a[i])  an++;
        }
        if (an == n-1) cout << ct<<endl;
        else cout << "-1"<<endl;
    }
    cin.get();
    cin.get();
    return 0;
}
