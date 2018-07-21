#include <iostream>
using namespace std;

int main()
{
    int t,n,n2,i,temp,ip=0;
    int a[50];
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n==1)
        {
            a[0]= n;
            cin >> n2;
            temp = n2;
            a[1]=n2;
            for(i=2;i<n2-1;i++)
            {
                cin >>ip;
                a[i]=ip;
            }
        }
        else 
        {
            temp = n;
            for(i=0;i<n-1;i++)
            {
                cin >> ip;
                a[i]=ip;
            }
        }
        for (i=0;i<temp;i++)
        {
            cout << a[i];
        }
    }
    
return 0;
}
