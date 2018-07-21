#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int p=0,a=0,temp=0;
        p = n;
        
        while(p!=0)
        {
          a = p%10;
          p = p/10;
          temp = temp*10 + a;    
        }
        cout << temp; 
        if(temp==n)
        cout << "wins";
        else
        cout << "losses";  
    }
    cin.get();
    cin.get();
}
