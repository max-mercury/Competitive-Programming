#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t,n,i,j;
    string s;    
    cin >> t;
    while(t--)
    {
        cin >> s >> n;
        long int ca=0,cb=0,count=0;
        char prev;
        for (j=0;j<n;j++)
        {
            for(i=0;s[i]!='\0';i++)
            {
                if (s[i] == 'a')
                {ca++;} 
                else if (s[i] == 'b')
                {cb++;}
                if (prev == s[i]) count++;
                if (ca > cb)count++;  
            }
            prev = s[i];
        }
        cout << count << endl;     
    }
    cin.get();
    cin.get();
    return 0;    
}
