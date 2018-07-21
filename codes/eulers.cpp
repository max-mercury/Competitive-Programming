#include <iostream>
#include <math.h>
#define mod 1000000007
using namespace std;

int main()
{
    long long int sum,sum1=0,sum2=0,i,n,mid1;
    long double e = 2.7182818284;
    cin>>n;
    mid1 = n/2; 
    for (i=1;i<=mid1;i++)
    {
        sum1 = (sum1 + floor(i*e))%mod;
    }
    
    for (i=mid1+1;i<=n;i++)
    {
        sum2 = (sum2 + floor(i*e))%mod;
    }
    sum = sum1+sum2;
        cout << sum <<endl;
        cin.get();
        cin.get();
    return 0;
}
