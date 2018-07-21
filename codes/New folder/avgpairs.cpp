#include <iostream>

using namespace std;

int main()
{
    int t,n,i,j,k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],count = 0,t1=0,t2=0,found=0;
        for (i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++) 
        {   for (j = i + 1; j < n; j++) 
            {   for (k = 0; k < n; k++) 
                {   if (a[i] + a[j] == 2*a[k])
                    {
                        if (t1 == i && t2 == j && found == 0)
                        {count++;found =1;}
                        else if (t1 == i && t2 == j && found == 1)
                        {}
                        else
                        {count++;found =1;}     
                    }
                    
                    t1 = i;t2=j; 
                }
                found =0;  
            }
        }
        cout << count << endl;
    }
    cin.get();
    cin.get();
    return 0;   
}
