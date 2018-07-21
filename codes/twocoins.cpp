#include<iostream>
using namespace std;

int main()
{
    int t,i,j,a,b,ct,g,h,n;
    int count[10];
    cin >> t;
    int p=t;
    int o = 0;
    while(t--)
    {
    ct = 0;
    cin >> n;
    int l[n-1],m[n-1];
    for(j=0;j<n-1;j++)
    {
        cin >> a >> b;
        l[j] = a;
        m[j] = b;
    }
    for (g=0;g<n-1;g+=2)
    {
        if (l[g] == l[g+1])
        {
            ct += 1;
        }
        else
        {
            ct += 2;
        }
    }
    for (h=0;h<n-1;h+=2)
    {
        if (m[h] == m[h+1])
        {
        ct += 1;
        }
        else
        {
            ct += 2;
        }
        if (m[h+1] == l[h+2])
        {
        ct -= 2;
        }
        
    }
   count[o] = ct;
   o++;
}
for (i=0;i<p;i++)
{
    cout << count[i] <<endl;
}
cin.get();
cin.get();
return 0;
}
