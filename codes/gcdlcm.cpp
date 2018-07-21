#include <iostream>
using namespace std;

long long gcd (long long a, long long b)
{
    if (b==0)
        return a;
    else 
        return gcd(b,a%b);
}


int main ()
{
    int t;
    long long n,m,g,l;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        g=gcd(n,m);
        l= (n*m)/g;
        cout << g << " " << l << endl;
    }
cin.get();
cin.get();
return 0;
}
