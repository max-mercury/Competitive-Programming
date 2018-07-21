#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int t,n,i,j,k,p;
    cin >> t;
    for (p=0;p<t;p++)
    {
        cin >> n;
        int a[n],count = 0;
        unordered_set<int> s;
        
        for (i=0;i<n;i++)
        {
            cin >> a[i];
            s.insert(2*a[i]);
        }
        
        for (i = 0; i < n; i++) 
        {
            for(j=1;j<n;j++)
            { // Check avg already exists or not
                if (s.find(a[i] + a[j]) != s.end())
                {
                    count ++;
                }
            }
        }
        
        cout << count << endl;
    }
    return 0;   
}
