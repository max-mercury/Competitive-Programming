#include <iostream>

using namespace std;

int main()
{
    int t,i;
    int a[30];
    char c[100],alpha[27]="abcdefghijklmnopqrstuvwxyz";
    cin >> t;
    while(t--)
    {
        for(i=0;i<=25;i++)
        { 
        cin >> a[i];
        }
        cin  >> c;
        
         
        for(i=0;i<=25;i++)
        { 
        cout << a[i] << " ";
        }
        cout << endl<<c<<strlen(c);
        cout << endl<< alpha;
    }
    
cin.get();
cin.get();
return 0;
}
