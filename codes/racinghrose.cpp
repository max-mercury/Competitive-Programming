#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int i,j,k,x,m,p,temp,min;
  int n1[k];
  cin >> x;
 while (x--)
  {
        cin >> k;
        for (j=0;j<k;j++)
        {
            cin >> n1[j];
        }
        min = abs(n1[0]- n1[1]);
        
        for (m=0;m<k;m++)
        {
            for (p=m+1;p<k;p++)
            {
            	temp = abs(n1[m]-n1[p]);
				if(temp<min)
				min=temp;
            }
        }
        cout << min <<endl;
    }
    cin.get();
    cin.get();
  return 0;
}
