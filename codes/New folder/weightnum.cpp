#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t,n,w;
    long int modu = 1000000007;
    cin >> t;
    while(t--)
    {
        cin >> n >> w;
        long int flag,num,i,num1,count,temp;
        
        for (i=pow(10,n-1);i<pow(10,n);i++)
        {
            num = i;flag =0;temp=0;
            while(num != 0)
            {
                num1 = num%10;
                num = num/10;
                if(flag == 0)
                {
                    num1 = (-1) * num1;
                    flag = 1;
                }
                temp = temp - num1;
            }
            if(temp == w)  {count++;}    
        }
        cout << (count%modu) << endl; 
    }
    cin.get();
    cin.get();
    return 0;
}
