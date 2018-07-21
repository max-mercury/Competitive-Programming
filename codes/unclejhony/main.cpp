#include <iostream>

using namespace std;

int main()
{
  int x,k,i,j,p,q,pos,dub,temp;
  cin >> x;
 while (x--)
  {
        cin >> k;
          int n1[k];
        for (i=0;i<k;i++)
        {
            cin >> n1[i];
        }
        cin >> pos;
        dub = n1[pos-1];
        for (p=0;p<k;p++)
        {
            for (q=p+1;q<k;q++)
            {
                if (n1[p] > n1[q])
                {
                temp = n1[p];
                n1[p] = n1[q];
                n1[p] = temp;
                }
            }
        }
        for (i=0;i<k;i++)
        {
            cout << n1[i]<< endl;
        }
    }
    return 0;
}
