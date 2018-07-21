#include<iostream>
using namespace std;

int main()
{
    int t,i,j,a,b,ct,g,h,n;
    int l[1000],m[1000];
    cin >> t;
    while(t--)
    {
    ct = 0;
    cin >> n;
    for(j=0;j<n-1;j++)
    {
        cin >> a >> b;
        l[j] = a;
        m[j] = b;
    }
    for (g=0; g < n-1; g+=2)
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
    cout << ct <<endl;
    for (i=0;i<n-1;i++)
    {
        cout << l[i] << m[i] << endl;
    }
}
cin.get();
cin.get();
    return 0;
}
