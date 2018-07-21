#include <iostream>
using namespace std;

long int l[100000];

void liste()
{
    l[0] = 0;
    l[1] = 2;
    l[2] = 7;
    for (i=3;i<=10000;i++)
    {
        if (i%2 == 1)
        {l[i] = l[i-1] + 3*l[i-2];}
        else
        {l[i] = l[i-1] + 7;}    
    }
}

int main()
{
    long int t,n,i,j,sum=0,a,b,c;
    bool ans;
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        ans = false; 
        liste();
        sum = l[0] + l[1];
        
        for (i=0;i<10000;i++)
        {
            sum = 
        }
        
        if (ans == true)
        {cout << "YES"<< endl;}
        else
        {cout << "NO"<<endl;}
    }
    return 0;
}
