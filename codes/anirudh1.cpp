#include <iostream>

using namespace std;

int main()
{
    char st[100];
    int t,i=0,ch,j=0,n=25;
    char one[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin >> t;
    while(t--)
    {
        cin >> st;
        char an[100]={0};
        while (isalpha(st[i]))
        {
            for (j=0;j<26;j++)
            {
                if (st[i] == one[j])
                {
                    an[i] = one[n-j];   
                }
            }
            i++;
        }
        i=0;
        while (isalpha(an[i]))
        {
            cout << an[i];
            i++;
        }
        i=0;
    }
    cin.get();
    cin.get();
    return 0;
}
