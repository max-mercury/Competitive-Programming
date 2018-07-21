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
        long int flag,num,num1,count,temp;
        string str1 = String.valueOf(pow(10,n-1));
        string str2 = pow(10,n);
        if (str1 < str2)
        {
            num = i;flag =0;temp=0;
            while(num != '\0')
            {
                num1 = num - '0';
                if(flag == 0)
                {
                    num1 = (-1) * num1;
                    flag = 1;
                }
                temp = temp - num1;
            }
            if(temp == w)  {count++;}
            str1 =str1 + 1;    
        }
        cout << (count%modu) << endl; 
    }
    cin.get();
    cin.get();
    return 0;
}
