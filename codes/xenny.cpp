#include <iostream>
using namespace std;

int main ()
{
    int t,a,b,i;
    int n1[100],n2[100];
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin >>a >>b;
        n1[i]=a;
        n2[i]=b;
    }
    for (i=0;i<t;i++)
    {
        cout << n1[i] << n2[i] << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
