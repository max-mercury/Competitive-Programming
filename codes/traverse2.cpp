#include <iostream>

using namespace std;

int main()
{
    int t,n,i,j,x,y,d;
    cin >> t;
    while(t--)
    {
        x=0;y=0;
        cin >> n;
        d=0;
        for(i=1;i<=n;i++)
        {
            if (d==1)
            {y++;d++;}
            else if (d==2)
            {y++;d=0;}
            else if(d==0)
            {x++;d++;}
        }
        cout << x << " " << y << endl;
    }
cin.get();
cin.get();
return 0;
}
