#include <iostream>

using namespace std;

int main()
{
    int x,i,a,count;
    cin >> x;
    int n1[x];
    for (i=0;i<x;i++)
    {
        cin >> a;
        n1[i] = a;
    }
    for (i=0;i<x;i++)
    {
        count = 0;
        while (n1[i] != 0)
        {
 			if((n1[i]/100)>0){count++;
			n1[i]-=100;
			}
			else if((n1[i]/50)>0){count++;
			n1[i]-=50;
			}
			else if((n1[i]/10)>0){count++;
			n1[i]-=10;
			}
			else if((n1[i]/5)>0){count++;
			n1[i]-=5;
			}
			else if((n1[i]/2)>0){count++;
			n1[i]-=2;
			}
			else {count++;
			n1[i]-=1;
			}
        }
        cout << count <<endl;
    }
    cin.get();
    cin.get();
    return 0;
}
