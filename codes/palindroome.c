#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int p=0,a=0,temp=0;
        p = n;
        
        while(p>0)
        {
          a = p%10;
          p = p/10;
          temp = temp*10 + a;    
        }
        if(temp==n)
        printf("wins");
        else
        printf("losses");  
    }
}
