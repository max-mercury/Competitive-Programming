#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,i,a,b,c;
    double n;
    cin >> x;
    int n1[x],n2[x],n3[x];
    for (i=0;i<x;i++)
    {
        cin >> a >> b >> c;
        n1[i] = a;
        n2[i] = b;
        n3[i] = c;
    }
    for (i=0;i<x;i++)
    {
       if ((n1[i] > n2[i]) && (n1[i] > n3[i]))
        {
              if ((n2[i] < n1[i]) && (n2[i] > n3[i]))
              {
              cout << (n2[i]) << endl;
              }
              else if ((n3[i] < n1[i]) && (n3[i] > n2[i])) 
              {
              cout << (n3[i]) << endl;
              }    
        }
        else if ((n2[i] > n1[i]) && (n2[i] > n3[i]))
        {
             if (n1[i] < n2[i] && n1[i] > n3[i])
              {
              cout << n1[i] << endl;
              }
              else if ((n3[i] < n2[i]) && (n3[i] > n1[i])) 
              {
              cout << n3[i] << endl;
              }   
        }
        else if ((n3[i] > n1[i]) && (n3[i] > n2[i])) 
        {
             if ((n1[i] < n3[i]) && (n1[i] > n2[i]))
              {
              cout << n1[i] << endl;
              }
              else if ((n2[i] < n3[i]) && (n2[i] > n1[i])) 
              {
              cout << n2[i] << endl;
              } 
        }    
    }
    cin.get();
    cin.get();
    return 0;
}
