#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int t,i,j,a,ct=0,flag;
    //int t[20];
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        bool p=true;
        for(int i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                p=false;
                break;
            }
 
        }
        if(p)
            cout<<"yes\n";
        else
            cout<<"no\n";
 
    }
    cin.get();
    cin.get();
    return 0;
}
