#include <iostream>

using namespace std;

bool ispalin(int num)
{
    int n,digit,rev=0;
    n = num;
     do
     {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
     } while (num != 0);
     if (n==rev)
     {return true;}
     else 
     {return false;}
}
int main()
{
    int t,n,m,i,sum;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        sum = 0;
        for (i=n;i<=m;i++)
        {
            if (ispalin(i))
            {sum = sum + i;}
        }
        cout << sum << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
