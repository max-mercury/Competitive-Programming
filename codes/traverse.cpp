#include <iostream>

using namespace std;

int main()
{
    int t,n,i,j,x=0,y=0;
    cin >> t;
    while(t--)
    {
        x=0;y=0;
        cin >> n;
        if(n==0)
        {x=0;y=0;}
        else if(n==1)
        {x++;}
        else if (n==2)
        {x++;y++;}
        else
        {
            for(i=1;i<=n;i++)
            {
                if (i%3==0)
                {y++;}
                else if(i%2==0 || i%7==0)
                {x++;}
                else
                {y++;}
            }
        }
        cout << x << " " << y << endl;
    }
cin.get();
cin.get();
return 0;
}
