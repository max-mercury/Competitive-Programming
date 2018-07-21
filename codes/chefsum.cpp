#include <iostream>
using namespace std;

int sufsum(int k,int n,int a[])
{
    int i,j,sumpref=0,sumsuf=0;
    for (i=0;i<n;i++)
    {
        if(i<k)
        {
        sumpref += a[i];
        }
        else if (i==k){
        sumpref += a[i];
        sumsuf += a[i];
        }
        else
        {
            sumsuf += a[i];
        }
    }
    return sumpref+sumsuf;
}


int main()
{
    int t,n,i,j,prevmin,c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],sum[n];
        for (i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sum[0] = sufsum(0,n,a);
        prevmin = sum[0];
        c=0;
        for (i=1;i<n;i++)
        {
            sum[i]=sufsum(i,n,a);
            if(sum[i] < prevmin)
            {
                prevmin = sum[i];
                c=i;
            }
            else if (sum[i]==prevmin)
            {
                if(i<c) c=i;
            }
            else
            {continue;}
        }
        cout << c+1 << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
