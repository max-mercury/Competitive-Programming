#include <stdio.h>
#include <string.h>

int main()
{
    int t,n,i,j;
    char s[1000];    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %d",&s,&n);
        long int ca=0,cb=0,count=0;
        char temp[1000*n];
        
        for(i=0;i<n;i++)
        {temp += s;}

        for(i=0;i<temp.size();i++)
        {
            if (temp[i] == 'a')
            {ca++;} 
            else if (temp[i] == 'b')
            {cb++;}
            if (ca > cb){count++;}   
        }
        printf("%d",count);   
    }
    return 0;    
}
