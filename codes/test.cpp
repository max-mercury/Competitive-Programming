#include <iostream>
using namespace std;


int main ()
{
    int i,n,g,m;
    cin >>n>>m;
    for (i=0;i<1000;i++)
    {
        if ((n%i==0) && (m%i==0))
        {g=i;}
    }
    cout << g << endl << (n*m/g) << endl;
cin.get();
cin.get();
return 0;
}
