#include <iostream>

using namespace std;

int main()
{
    int t=5,n=5,ct=0,i,j;
    int a[5] = {1,4,5,2,3};
    int d =2;
    
    for(i=0;i<n;i++)
    {
    j=i+d;
    while(a[i] != a[j])
    {
        if(a[i] < a[j])
        {
            a[j] = a[j]-1;
            a[i] = a[i]+1;
            ct++;
        }
        else if (a[i] == a[j])
        {
        break;
        }
        else
        {
        a[i] = a[i]-1;
        a[j] = a[j]+1;
        ct++;
        }
    }
    }
    cout << ct <<t<< n;
    cin.get();
    cin.get();
    return 0;
}
