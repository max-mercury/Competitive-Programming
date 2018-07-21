#include <iostream>

using namespace std;

int main(){
  int x,k,i,j,p,q,pos,dub,temp,c,f=0;
  cin >> x;
  int z = x;
  int ans[10000];
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
                    n1[q] = temp;
                }
            }
        }
        for (j=0;j<k;j++)
        {
            if (n1[j] == dub)
            {
            ans[f]= j+1;
            f++;
        }
        }
    }
    for (c=0;c<z;c++)
        {
            cout << ans[c] <<endl;
        }
    cin.get();
    cin.get();
    return 0;
}
