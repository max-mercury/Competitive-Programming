#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int n,m,k;
    cin >> n >> m >> k;
    int a[n],p[m];
    int i,j,d,mul=1;
    int temp=0,sum=0;
    for (i=0;i<n;i++)
    {cin >> a[i];}
    for (i=0;i<n;i++)
    {cin >> p[i];}
    
    for (i=0;i<n;i++)
    {
        d = (rand() % k) + 1;
        //cout << d <<endl;
        a[i] += d;
        mul *= a[i];
    }
    //cout << mul << endl;
    for (i=0;i<n;i++)
    {
        temp = mul % p[i];
        sum += temp;
        cout << a[i] << " ";
    }
   // cout << endl << sum;
    //cout << endl << (sum/m);
    cin.get();
    cin.get();
    return 0;
}

