#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    long int a,b,i,j;
    
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a==1) a+=1;
        for (i=a;i<=b;i++)
        {
            bool p=true;
            for (j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    p=false;
                    break;
                }
            }
            if(p)
            cout<<i<<endl;    
        }
    }
cin.get();
cin.get();
return 0;
}
